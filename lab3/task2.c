#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
int main() {
    int fd[2]; //file descriptor for pipe
    pid_t pid;
    int y, z;

    if (pipe(fd) == -1) { //failure in creating pipe
        fprintf(stderr, "Pipe failed");
        return 1;
    }
    else{
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
    } else if (pid == 0) { //child process
        printf("In Child process: Enter an integer number: ");
        scanf("%d", &y);
        printf("In Child process: Received y = %d from the user\n", y);
        close(fd[0]); //closing the read end of the pipe
        write(fd[1], &y, sizeof(y)); //writing to the pipe
        exit(0);
    } else { //parent process
        wait(NULL);
        close(fd[1]); //close write end of the pipe
        read(fd[0], &z, sizeof(z));
        printf("In Parent process: Received from child process the value %d\n", z);
        z += 15; //add 15 to the value received from the child
        printf("In Parent process: The new value of z is: %d\n", z);
    }
    }
    return 0;
}
