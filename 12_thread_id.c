// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<sys/syscall.h>

void *fun()
{
    pthread_t t = pthread_self();
    printf("thread (pthread) : %ul \n",t);
    // linux specific.
    printf("sys : %d\n",(pid_t)syscall(SYS_gettid));

    
}

int main()
{
    // pthread API
    pthread_t t1;

    if (0 != pthread_create(&t1, NULL, &fun, NULL))
    {
        printf("Error\n");
        return -1;
    }

    printf("thread (pthread) : %ul \n",t1);
   
    if (0 != pthread_join(t1, NULL))
    {
        printf("Error\n");
        return -1;
    }

    return 0;
}