
#include <stdio.h>
#include <math.h>

int main() {
   int num, n, sum = 0, temp;
   printf("Enter a number: ");
   scanf("%d", &num);
   n = floor(log10(abs(num))) + 1; // find number of digits
   temp = num;
   while (temp > 0) {
      int digit = temp % 10;
      sum += pow(digit, n);
      temp /= 10;
   }
   if (num == sum)
      printf("%d is an Armstrong number", num);
   else
      printf("%d is not an Armstrong number", num);
   return 0;
}