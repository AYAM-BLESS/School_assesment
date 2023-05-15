
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   int fd;
   int y, z;

   // Create the named pipe
   mkfifo("myfifo", 0666);

   // Open the named pipe for reading
   fd = open("myfifo", O_RDONLY);

   // Read the value of y from the named pipe
   read(fd, &y, sizeof(y));
   
   // Close the named pipe
   close(fd);
   
   // Add 15 to the value of y and store it in z
   z = y + 15;

   // Print out the final value of z
   printf("In main2 process: Received from main1 process the value %d\n", y);
   printf("In main2 process: The new value of z is: %d\n", z);

   return 0;
}