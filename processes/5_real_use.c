#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int arr[] = {1, 2, 5, 3, 2, 1, 3, 8};
    int size = sizeof(arr) / sizeof(int);

    int fd[2];
    if (pipe(fd) == -1)
    {
        printf("Pipe failed!\n");
        return -1;
    }

    int id = fork();
    if (id == -1)
    {
        printf("Fork failed!\n");
        return -1;
    }

    if (id == 0)
    {
        close(fd[0]);
        int sum = 0;
        for (int i = 0; i < size / 2; i++)
        {
            sum += arr[i];
        }
        printf("(child) SUM : %d \n", sum);
        if (write(fd[1], &sum, sizeof(sum)) == -1)
        {
            printf("Pipe write failed!\n");
            return -1;
        }
        close(fd[1]);
    }
    else
    {
        close(fd[1]);
        int sum = 0;
        for (int i = size / 2; i < size; i++)
        {
            sum += arr[i];
        }
        printf("(main) SUM : %d \n", sum);
        int child_sum;
        if (read(fd[0], &child_sum, sizeof(child_sum)) == -1)
        {
            printf("Pipe read failed!\n");
            return -1;
        }
        close(fd[0]);

        printf("(main) Total array sum : %d \n", (sum + child_sum));
    }

    return 0;
}