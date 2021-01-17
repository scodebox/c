// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_barrier_t barrier;

void *fun()
{
    for (int i = 0; i < 10; i++)
    {
        int w = rand() % 4;
        sleep(w);
        printf("Waiting in barrier! \n");
        pthread_barrier_wait(&barrier);
        printf("passed the barrier!\n");
    }
}

int main()
{
    pthread_t t[5];
    pthread_barrier_init(&barrier, NULL, 5);
    srand(time(NULL));

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

    pthread_barrier_destroy(&barrier);
    return 0;
}