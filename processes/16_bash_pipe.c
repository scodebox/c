#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int fd[2];

    if (-1 == pipe(fd))
        return -1;

    int pid_1 = fork();
    if (0 > pid_1)
        return -1;

    if (pid_1 == 0)
    {
        // child proc (ping)
        close(fd[0]);
        dup2(fd[1], STDOUT_FILENO); // change output to piple.
        close(fd[1]);
        execlp("ping", "ping", "-c", "2", "google.com", NULL);
    }

    waitpid(pid_1, NULL, 0);

    int pid_2 = fork();
    if (0 > pid_2)
        return -1;

    if (pid_2 == 0)
    {
        // child proc (grep)
        dup2(fd[0], STDIN_FILENO);
        close(fd[1]);
        close(fd[0]);
        execlp("grep", "grep", "rtt", NULL);
    }

    close(fd[0]);
    close(fd[1]);
    waitpid(pid_2, NULL, 0);

    return 0;
}