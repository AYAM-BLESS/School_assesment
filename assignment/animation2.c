#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("\r|");
        fflush(stdout);
        usleep(100000);
        printf("\r/");
        fflush(stdout);
        usleep(100000);
        printf("\r-");
        fflush(stdout);
        usleep(100000);
        printf("\r\\");
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
    return 0;
}