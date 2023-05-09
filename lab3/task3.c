
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

int main() {
    int fd[2];
    pid_t pid;
    int arr[10] = {4, 8, 10, 12, 14, 3, 5, 7, 9, 11};
    int sum_child = 0, sum_parent = 0;

    if (pipe(fd) == -1) {
        fprintf(stderr, "Pipe failed");
        return 1;
    }

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
    } else if (pid == 0) {
        for (int i = 0; i < 5; i++) {
            sum_child += arr[i];
        }
        printf("In Child process: Sum the following numbers: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nIn Child process: Partial sum is: %d\n", sum_child);
        close(fd[0]);
        write(fd[1], &sum_child, sizeof(sum_child));
        exit(0);
    } else {
        for (int i = 5; i < 10; i++) {
            sum_parent += arr[i];
        }
        wait(NULL);
        close(fd[1]);
        read(fd[0], &sum_child, sizeof(sum_child));
        printf("In Parent process: Sum the following numbers: ");
        for (int i = 5; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nIn Parent process: Partial sum is: %d\n", sum_parent);
        printf("In Parent process: Partial sum received from child process is: %d\n", sum_child);
        int full_sum = sum_child + sum_parent;
        printf("In Parent process: The final sum is: %d\n", full_sum);
    }

    return 0;
}
