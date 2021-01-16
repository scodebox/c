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

    int fd = open("sum", O_RDONLY);
    if (-1 == fd)
    {
        printf("fd failed \n");
        return -1;
    }

    // for(int i=0;i<5;i++){
    //     if(read(fd,&arr[i],sizeof(int))==-1){
    //         printf("read failed \n");
    //         return -1;
    //     }
    //     printf("Read : %d \n",arr[i]);
    // }

    if (read(fd, &arr, sizeof(arr)) == -1)
    {
        printf("read failed \n");
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("SUM : %d\n", sum);

    close(fd);

    return 0;
}