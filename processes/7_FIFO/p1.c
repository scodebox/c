#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>

/*
make pipe 'sum'
$ mkfifo sum
*/

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = rand() % 100;
        printf("Generated : %d\n", arr[i]);
    }

    int fd = open("sum", O_WRONLY);

    // for(int i=0;i<5;i++){
    //     if(write(fd,&arr[i],sizeof(int))==-1) {
    //         printf("Wead failed \n");
    //         return -1;
    //     }
    //     printf("Wrote: %d \n",arr[i]);
    // }

    if (write(fd, &arr, sizeof(arr)) == -1)
    {
        printf("Write failed \n");
        return -1;
    }

    close(fd);

    return 0;
}