#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

int main(){

    int id = fork();

    if (-1==id)
    {
        printf("fork failed\n");
        return -1;
    }

    if(0==id){
        // Child process.
        execlp("ping","ping","-c","3","google.com",NULL);
    }else{
        // Main process.
        wait(NULL);
        printf("Done! \n");
    }

    return 0;
}