#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int fd[2];
    if (-1 == pipe(fd))
    {
        return -1;
    }

    int id = fork();

    if (-1 == id)
    {
        printf("Fork failed!\n");
        return -1;
    }

    if (0 == id)
    {
        // child
        close(fd[0]);
        char str[100];

        printf("Enter a string : ");

        fgets(str, 100, stdin);
        str[strlen(str) - 1] = '\0';
        int len = strlen(str) + 1;

        if (-1 == write(fd[1], &len, sizeof(int)))
            return -1;
        if (-1 == write(fd[1], str, sizeof(char) * len))
            return -1;

        close(fd[1]);
    }
    else
    {
        // main proc
        close(fd[1]);
        int size;
        char str[100];

        if (-1 == read(fd[0], &size, sizeof(int)))
            return -1;
        if (-1 == read(fd[0], str, sizeof(char) * size))
            return -1;

        printf("read : %s\n", str);

        close(fd[0]);
        wait(NULL);
    }
    return 0;
}