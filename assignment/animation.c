
#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    char animation[4] = {'-', '\\', '|', '/'};

    for (i = 0; i < 20; i++) {
        printf("%c", animation[i % 4]);
        fflush(stdout);
        usleep(100000); // delay for 100 milliseconds
        printf("\b"); // move cursor back one character
    }

    return 0;
}