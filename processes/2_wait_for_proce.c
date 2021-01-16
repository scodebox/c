#include <stdio.h>
#include <stdio.h>
#include <unistd.h> // linux specific library

int main()
{
    int id = fork();
    int n;

    if (id == 0)
        n = 1;
    else
        n = 6;
    // wait for the child process to finish.
    if (id != 0)
        wait();

    for (int i = n; i < n + 5; i++)
    {
        printf("%d ", i);
    }
    if (id != 0)
        printf("\n");

    return 0;
}