#include <stdio.h>
#include <stdio.h>
#include <unistd.h> // linux specific library

int main()
{
    // Create child process and return id.
    // Clone the calling process, creating an exact copy.
    // Return -1 for errors, 0 to the new process,
    // and the process ID of the new process to the old process.

    int id = fork();

    printf("Hello world from ID : %d\n", id);

    if (id == 0)
        printf("Child process\n");
    else
        printf("Main process\n");

    printf("\n");
    return 0;
}