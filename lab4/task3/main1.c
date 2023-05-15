
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   int fd;
   int sum = 0;
   int arr[10] = {4, 8, 10, 12, 14, 3, 5, 7, 9, 11};

   // Create the named pipe
   mkfifo("myfifo", 0666);

   // Sum the first five elements of the array
   for (int i = 0; i < 5; i++) {
       sum += arr[i];
   }

   // Prompt the user to press enter to send the partial sum
   printf("In main1 process: Sum the following numbers: 4 8 10 12 14\n");
   printf("In main1 process: Partial sum is: %d\n", sum);
   printf("Press enter to send the partial sum...\n");
   getchar();

   // Open the named pipe for writing
   fd = open("myfifo", O_WRONLY);
   
   // Write the value of sum to the named pipe
   write(fd, &sum, sizeof(sum));
   
   // Close the named pipe
   close(fd);

   return 0;
}
