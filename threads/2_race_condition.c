// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int counter = 0;

void *fun()
{
    for (int i = 0; i < 1000000; i++)
        ++counter;
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

    printf("Total Count : %d\n", counter);

    return 0;
}