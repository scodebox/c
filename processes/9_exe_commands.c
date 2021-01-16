#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{

    int id = fork();

    if (-1 == id)
    {
        printf("fork failed\n");
        return -1;
    }

    if (0 == id)
    {
        // Child process.
        int err = execlp("ping", "ping", "-c", "3", "google.com", NULL);
        // if command is wrong!
        if (-1 == err)
        {
            printf("Not found!\n");
            return -1;
        }
    }
    else
    {
        // Main process.

        // If something went wrong in command exe.
        int status;
        wait(&status);
        if (WIFEXITED(status))
        {
            int status_code = WIFEXITED(status);
            if (0 == status_code)
            {
                printf("Done! \n");
            }
            else
            {
                printf("NOT-Done! Error code : %d \n", status_code);
            }
        }
    }

    return 0;
}