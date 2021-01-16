#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>

int main()
{

    // MAKE FIFO in c
    if (mkfifo("myfifo1", 0777) == -1)
    {
        if (errno != EEXIST)
        {
            printf("FIFO file creation failed!\n");
            return -1;
        }
    }
    /*
    command line $ mkfifo myfifo2
    */

    // file descriptor kind of manually.
    int fd = open("myfifo1", O_WRONLY);
    if (fd == -1)
        return -1;
    // int fd = open("myfifo1", O_RDWR); // for read and write

    int num = 65;

    if (write(fd, &num, sizeof(num)) == -1)
    {
        printf("Write failed!\n");
    }
    close(fd);

    return 0;
}