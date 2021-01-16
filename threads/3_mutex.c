// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t mutex;

void *fun()
{
    for (int i = 0; i < 1000000; i++)
    {
        pthread_mutex_lock(&mutex);
        ++counter;
        pthread_mutex_unlock(&mutex);
    }
}

int main()
{
    pthread_t t1, t2;
    pthread_mutex_init(&mutex, NULL);

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
    pthread_mutex_destroy(&mutex);
    printf("Total Count : %d\n", counter);

    return 0;
}