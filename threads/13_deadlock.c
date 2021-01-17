// -pthread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex1;
pthread_mutex_t mutex2;


void *fun1()
{
    pthread_mutex_lock(&mutex1);
    printf("fun 1 : Lock mutex 1\n");
    sleep(1);
    pthread_mutex_lock(&mutex2);
    printf("fun 1 : Lock mutex 2\n");

    printf("fun 1 : Got both \n");

    pthread_mutex_unlock(&mutex1);
    printf("fun 1 : Unlock mutex 2\n");
    pthread_mutex_unlock(&mutex2);
    printf("fun 1 : Unlock mutex 2\n");
   
}

void *fun2(){
    pthread_mutex_lock(&mutex2);
    printf("fun 2 : Lock mutex 2\n");
    sleep(1);
    pthread_mutex_lock(&mutex1);
    printf("fun 2 : Lock mutex 1\n");
    
    printf("fun 2 : Got both \n");
    
    pthread_mutex_unlock(&mutex1);
    printf("fun 1 : Unlock mutex 2\n");
    pthread_mutex_unlock(&mutex2);
    printf("fun 1 : Unlock mutex 2\n");
}

int main()
{
    pthread_t t1, t2;
    pthread_mutex_init(&mutex1,NULL);
    pthread_mutex_init(&mutex2,NULL);


    if (0 != pthread_create(&t1, NULL, &fun1, NULL))
    {
        printf("Error\n");
        return -1;
    }
    if (0 != pthread_create(&t2, NULL, &fun2, NULL))
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

    pthread_mutex_destroy(&mutex1);
    pthread_mutex_destroy(&mutex2);
    return 0;
}