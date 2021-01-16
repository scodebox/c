#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

void show()
{
    printf("\nThis is hint!\n");
}

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
        sleep(3);
        kill(getppid(), SIGUSR1);
    }
    else
    {

        signal(SIGUSR1, &show);

        int ans;
        printf("QUS :: 2 x 5 : ");
        scanf("%d", &ans);
        if (10 == ans)
            printf("Right!\n");
        else
            printf("Wrong!\n");

        wait(NULL);
    }

    return 0;
}