#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int container = 0;
pthread_mutex_t mutex;
pthread_cond_t passcontrol;
// pthread_cond_signal()
// pthread_cond_broadcast()
// pthread_cond_wait()

void *generator()
{
    for (int i = 0; i < 100; i++)
    {
        pthread_mutex_lock(&mutex);
        container += 20;
        printf("Gnerated : %d\n", container);
        pthread_mutex_unlock(&mutex);

        // Signal to all thread are waiting for generation.
        // pthread_cond_signal(&passcontrol); // signal only one thread.
        pthread_cond_broadcast(&passcontrol); // signal all threads.

        sleep(1);
    }
}

void *consumer()
{
    pthread_mutex_lock(&mutex);
    while (container < 100)
    {
        printf("Consumer waiting...\n");
        pthread_cond_wait(&passcontrol, &mutex);
        // equivalent to:
        // pthread_mutex_unlock(&mutex); -> unlock mutex.
        // wait for a singal from generator.
        // pthread_mutex_lock(&mutex); -> lock mutex
    }
    container -= 100;
    printf("Ramining : %d\n", container);
    pthread_mutex_unlock(&mutex);
}

int main()
{
    pthread_t generator_th, consumer_th1, consumer_th2, consumer_th3, consumer_th4, consumer_th5;
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&passcontrol, NULL);

    pthread_create(&generator_th, NULL, &generator, NULL);
    pthread_create(&consumer_th1, NULL, &consumer, NULL);
    pthread_create(&consumer_th2, NULL, &consumer, NULL);
    pthread_create(&consumer_th3, NULL, &consumer, NULL);
    pthread_create(&consumer_th4, NULL, &consumer, NULL);
    pthread_create(&consumer_th5, NULL, &consumer, NULL);

    pthread_join(generator_th, NULL);
    pthread_join(consumer_th1, NULL);
    pthread_join(consumer_th2, NULL);
    pthread_join(consumer_th3, NULL);
    pthread_join(consumer_th4, NULL);
    pthread_join(consumer_th5, NULL);

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&passcontrol);
    return 0;
}