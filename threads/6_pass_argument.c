// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun(void *val)
{
    printf("Value in thread: %d \n", *(int *)val);
}

int main()
{
    pthread_t t1;
    int *value = (int *)malloc(sizeof(int));
    *value = 1234;

    if (0 != pthread_create(&t1, NULL, &fun, (void *)value))
    {
        printf("Error\n");
        return -1;
    }
    if (0 != pthread_join(t1, NULL))
    {
        printf("Error\n");
        return -1;
    }

    return 0;
}