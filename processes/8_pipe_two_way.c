#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int p1[2]; // main -> child
    int p2[2]; // child -> main

    if (-1 == pipe(p1))
    {
        printf("Pipe 1 failed!\n");
        return -1;
    }
    if (-1 == pipe(p2))
    {
        printf("Pipe 2 failed!\n");
        return -1;
    }

    int id = fork();

    if (id == 0)
    {
        close(p2[0]);
        close(p1[1]);

        int num;

        if (-1 == read(p1[0], &num, sizeof(int)))
        {
            printf("Pipe read child failed!\n");
            return -1;
        }
        printf("Read child : %d \n", num);

        num *= 3;

        if (-1 == write(p2[1], &num, sizeof(int)))
        {
            printf("Pipe write child failed!\n");
            return -1;
        }
        printf("Written child : %d \n", num);

        close(p1[1]);
        close(p1[0]);
    }
    else
    {
        close(p1[0]);
        close(p2[1]);

        int num = rand() % 10;

        if (-1 == write(p1[1], &num, sizeof(int)))
        {
            printf("Pipe write main failed!\n");
            return -1;
        }
        printf("Written main : %d \n", num);

        if (-1 == read(p2[0], &num, sizeof(int)))
        {
            printf("Pipe read main failed!\n");
            return -1;
        }
        printf("Read main : %d \n", num);

        close(p1[1]);
        close(p2[0]);
    }

    return 0;
}