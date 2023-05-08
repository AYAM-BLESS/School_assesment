#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int fd[2];
    pid_t pid;
    int y, z;

    if (pipe(fd) == -1) {
        fprintf(stderr, "Pipe failed");
        return 1;
    }

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("In Child process: Enter an integer number: ");
        scanf("%d", &y);
        printf("In Child process: Received y = %d from the user\n", y);
        close(fd[0]);
        write(fd[1], &y, sizeof(y));
        exit(0);
    } else {
        wait(NULL);
        close(fd[1]);
        read(fd[0], &z, sizeof(z));
        printf("In Parent process: Received from child process the value %d\n", z);
        z += 15;
        printf("In Parent process: The new value of z is: %d\n", z);
    }
    return 0;
}
