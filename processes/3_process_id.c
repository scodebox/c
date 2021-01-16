#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int id = fork();

    // // If parent process terminate first.
    // if (id == 0)
    //     sleep(1);

    // getpid() -> process id.
    // getppid() -> parent process id.
    printf("current id: %d, parent id : %d\n", getpid(), getppid());


    int c_id = wait(NULL);
    if(c_id == -1)
        printf("No child process to wait for!\n");
    else
        printf("%d finished execution!\n",c_id);

    return 0;
}