#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main()
{
    int id = fork();
    if (-1 == id)
    {
        printf("Fork failed!\n");
        return -1;
    }

    if (0 == id)
    {
        int i = 0;
        while (1)
        {
            printf("%d -> nonstop\n", i++);
        }
    }
    else
    {
        sleep(1);
        kill(id, SIGSTOP); // Pause
        printf("Paused!\n");
        sleep(1);
        kill(id, SIGCONT); // Play
        printf("Start!\n");
        sleep(2);
        kill(id, SIGKILL); // Kill
        printf("Killed!\n");
        wait(NULL);
    }
    return 0;
}