// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

void *roll()
{
    int *value = (int *)malloc(sizeof(int));
    *value = 1 + (rand() % 6);
    printf("Thread value : %d\n", *value);
    return (void *)value;
}

int main()
{
    int *value;
    srand(time(NULL));
    pthread_t th;

    if (0 != pthread_create(&th, NULL, &roll, NULL))
    {
        printf("Error\n");
        return -1;
    }
    if (0 != pthread_join(th, (void **)&value))
    {
        printf("Error\n");
        return -1;
    }

    printf("Value in main : %d \n",*value);
    free(value);

    return 0;
}