// -pthread

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *fun()
{
    printf("Test from threads START\n");
    sleep(3);
    printf("Test from threads END\n");
}

int main()
{
    pthread_t t1,t2;
    pthread_create(&t1,NULL,&fun,NULL);
    pthread_create(&t2,NULL,&fun,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    return 0;
}