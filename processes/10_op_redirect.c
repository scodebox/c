#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include<fcntl.h>

/*
file descriptor         file
    0                   STDIN
    1                   STDOUT
    2                   STDERR
    3                   ping_results.txt

    using dup2() function change file descriptor.
*/

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
        // To store output in a file we need to create and open the file.
        // O_WRONLY | O_CREAT -> write only OR create
        int file = open("ping_results.txt", O_WRONLY | O_CREAT,0777);
        if(-1==file){
            printf("File creation failed!\n");
            return -1;
        }

        int file2 = dup2(file,STDOUT_FILENO); // STDOUT changed to file.
        close(file);

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