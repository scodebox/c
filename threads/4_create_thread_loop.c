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
    pthread_t t[5];
    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < 5; i++)
    {
        if (0 != pthread_create(t + i, NULL, &fun, NULL))
        {
            printf("Error\n");
            return -1;
        }
        printf("Thread %d created!\n",i);
    }

    for (int i = 0; i < 5; i++)
    {
        if (0 != pthread_join(t[i], NULL))
        {
            printf("Error\n");
            return -1;
        }
        printf("Thread %d joined!\n",i);
    }

    pthread_mutex_destroy(&mutex);
    printf("Total Count : %d\n", counter);

    return 0;
}