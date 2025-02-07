#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;  // Process ID

    // Create a new process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process
        printf("Child Process (PID: %d): Executing a new program using exec().\n", getpid());
        
        // Replace the current process image with a new program
        execl("/bin/ls", "ls", "-l", NULL);

        // If exec() fails
        perror("execl failed");
        exit(EXIT_FAILURE);
    } else {
        // Parent process
        printf("Parent Process (PID: %d): Waiting for child process (PID: %d) to complete.\n", getpid(), pid);

        int status;
        wait(&status);  // Wait for child process to terminate

        if (WIFEXITED(status)) {
            printf("Parent Process: Child terminated with exit code %d.\n", WEXITSTATUS(status));
        } else {
            printf("Parent Process: Child did not terminate normally.\n");
        }
    }

    return 0;
}


