// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun()
{
    printf("Start Thread!\n");
    printf("process ID : %d\n",getpid());
    sleep(3);
    printf("End Thread!\n");
}

int main()
{
    pthread_t t1, t2;

    if (0 != pthread_create(&t1, NULL, &fun, NULL))
    {
        printf("Error\n");
        return -1;
    }
    if (0 != pthread_create(&t2, NULL, &fun, NULL))
    {
        printf("Error\n");
        return -1;
    }
    if (0 != pthread_join(t1, NULL))
    {
        printf("Error\n");
        return -1;
    }
    if (0 != pthread_join(t2, NULL))
    {
        printf("Error\n");
        return -1;
    }

    return 0;
}