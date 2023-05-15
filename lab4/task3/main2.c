
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   int fd;
   int sum = 0;
   int arr[10] = {4, 8, 10, 12, 14, 3, 5, 7, 9, 11};
   int partial_sum;

   // Create the named pipe
   mkfifo("myfifo", 0666);

   // Sum the last five elements of the array
   for (int i = 5; i < 10; i++) {
       sum += arr[i];
   }

   // Open the named pipe for reading
   fd = open("myfifo", O_RDONLY);

   // Read the value of partial_sum from the named pipe
   read(fd, &partial_sum, sizeof(partial_sum));
   
   // Close the named pipe
   close(fd);
   
   // Add partial_sum to sum to get the full sum of the array
   sum += partial_sum;

   // Print out the final sum
   printf("In main2 process: Sum the following numbers: 3 5 7 9 11\n");
   printf("In main2 process: Partial sum is: %d\n", sum - partial_sum);
   printf("In main2 process: Partial sum received from child process is: %d\n", partial_sum);
   printf("In main2 process: The final sum is: %d\n", sum);

   return 0;
}
