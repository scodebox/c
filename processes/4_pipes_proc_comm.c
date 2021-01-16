#include <stdio.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    // file descriptor.
    // fd[0] -> read
    // fd[1] -> write
    int fd[2];

    // pipe returns -1 if failed
    if (pipe(fd) == -1)
    {
        printf("Pipe creating failed!\n");
        return -1;
    }

    int id = fork();
    if (id == -1)
    {
        printf("fork failed\n");
        return -1;
    }

    if (id == 0)
    {
        // closing read.
        close(fd[0]);

        int input;
        printf("Input : ");
        scanf("%d", &input);
        // write return -1 is failed.
        if (write(fd[1], &input, sizeof(int)) == -1)
        {
            printf("Pipe error while writing!\n");
            return -1;
        }
        close(fd[1]); // closing read.
    }
    else
    {
        close(fd[1]); // cloding write.

        int data_from_child;
        if (read(fd[0], &data_from_child, sizeof(int)) == -1)
        {
            printf("Pipe error while reading!\n");
            return -1;
        }
        printf("(Parent) Data from child : %d\n", data_from_child);
        close(fd[0]); // close read.
    }

    return 0;
}