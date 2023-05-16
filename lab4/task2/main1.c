
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   int fd;
   int y;

   // Create the named pipe with permision set to 0666
   mkfifo("myfifo", 0666);

   // Prompt the user to enter an integer
   printf("In main1 process: Enter an integer number: ");
   scanf("%d", &y);
   printf("In main1 process: Received y = %d from the user\n", y);

   // Open the named pipe for writing
   fd = open("myfifo", O_WRONLY);
   
   // Write the value of y to the named pipe
   write(fd, &y, sizeof(y));
   
   // Close the named pipe
   close(fd);

   return 0;
}