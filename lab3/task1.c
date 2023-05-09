
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("I am the child process (pid=%d)\n", getpid());
    } else {
        // Parent process
        printf("I am the parent process (pid=%d)\n", getpid());
    }

    return 0;
}