
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2]; // file descriptor for pipe
    pid_t pid;
    int y[25], z[25];

    if (pipe(fd) == -1) { // create pipe
        fprintf(stderr, "Pipe failed");
        return 1;
    }

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("In Child process: Enter 25 integer numbers:\n");
        for (int i = 0; i < 25; i++) {
            scanf("%d", &y[i]);
            printf("In Child process: Received y[%d] = %d from the user\n", i, y[i]);
        }
        close(fd[0]); // close read end of pipe
        write(fd[1], &y, sizeof(y)); // write to pipe
        close(fd[1]); // close write end of pipe
    } else {
        // Parent process
        close(fd[1]); // close write end of pipe
        read(fd[0], &z, sizeof(z)); // read from pipe
        printf("In Parent process: Received from child process the following values:\n");
        for (int i = 0; i < 25; i++) {
            printf("%d ", z[i]);
            z[i] += 15; // add 15 to value received
        }
        printf("\nIn Parent process: The new values of z are:\n");
        for (int i = 0; i < 25; i++) {
            printf("%d ", z[i]);
        }
        printf("\n");
        close(fd[0]); // close read end of pipe
    }

    return 0;
}