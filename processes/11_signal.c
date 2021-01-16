#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>


int main(){
    int id = fork();
    if(-1==id){
        printf("Fork failed!\n");
        return -1;
    }

    if(0==id){
        while(1){
            printf("nonstop\n");
        }
    }else{
        sleep(3);
        kill(id,SIGKILL);
        wait(NULL);
    }
    return 0;
}