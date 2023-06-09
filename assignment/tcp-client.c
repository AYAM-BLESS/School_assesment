#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080

int main(int argc, char const *argv[]) {
    struct sockaddr_in address;
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = NULL;
    char buffer[1024] = {0};
    size_t len = 0;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("\n Socket creation error \n");
        return -1;
    }

    memset(&serv_addr, '0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("\nConnection Failed \n");
        return -1;
    }

    valread = read(sock, buffer, 1024);
    printf("%s\n",buffer);
    while(1) {
        printf("Enter message: ");
        getline(&hello, &len, stdin);
        send(sock, hello, strlen(hello), 0);
        if (strcmp(hello, "exit\n") == 0) {
            printf("Disconnected from server.\n");
            break;
        }
        valread = read(sock, buffer, 1024);
        printf("%s\n", buffer);
    }
    free(hello);
    close(sock);
    return 0;
}