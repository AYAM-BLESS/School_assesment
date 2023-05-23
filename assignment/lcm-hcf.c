
#include <stdio.h>

int main() {
   int num1, num2, lcm, hcf, i, gcd;
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   // Find HCF
   for (i = 1; i <= num1 && i <= num2; i++) {
      if (num1 % i == 0 && num2 % i == 0)
         gcd = i;
   }
   hcf = gcd;
   
   // Find LCM
   lcm = (num1 * num2) / hcf;

   printf("HCF of %d and %d is %d\n", num1, num2, hcf);
   printf("LCM of %d and %d is %d\n", num1, num2, lcm);

   return 0;
}