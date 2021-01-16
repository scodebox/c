#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

void customfun()
{
    printf("Wont stop!\n");
    printf("Enter : ");
    fflush(stdout);
}

int main()
{
    // Method-1
    // struct sigaction my_action;
    // my_action.sa_handler = &customfun;
    // my_action.sa_flags = SA_RESTART;

    // sigaction(SIGTSTP, &my_action, NULL);

    // Method-2
    signal(SIGTSTP, &customfun);

    int num;
    printf("Enter : ");
    scanf("%d", &num);
    printf("Result : %d \n", num * 10);

    return 0;
}