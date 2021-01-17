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
    // return (void *)value;
    pthread_exit((void *)value); // works like return.
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

    pthread_detach(th);
    /* 
    main thread will terminated execution. 
    join thread through error. 
    if still need to join use pthread_exit(0)
    */

    // OR use this
    /*

    pthread_attr_t detached_thread;
    pthread_attr_init(&detached_thread);
    pthread_attr_setdetachstate(&detached_thread,PTHREAD_CREATE_DETACHED);
    pthread_create(&th, &detached_thread, &roll, NULL);
    // destroy.
    pthread_attr_destroy(&detached_thread);
    
    
    */

    // exit(0); // Terminate the process
    pthread_exit(0);
    /* doesn't terminate the process. 
    wait for the thread are created from this process.
    */

    if (0 != pthread_join(th, (void **)&value))
    {
        printf("Error\n");
        return -1;
    }

    printf("Value in main : %d \n", *value);
    free(value);

    return 0;
}