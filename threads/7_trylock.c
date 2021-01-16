// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex;

void *fun()
{
    if (pthread_mutex_trylock(&mutex) == 0)
    {
        printf("Got the lock! \n");
        sleep(1);
        pthread_mutex_unlock(&mutex);
    }
    else
    {
        printf("Unable to lock! \n");
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
    }

    for (int i = 0; i < 5; i++)
    {
        if (0 != pthread_join(t[i], NULL))
        {
            printf("Error\n");
            return -1;
        }
    }

    pthread_mutex_destroy(&mutex);

    return 0;
}