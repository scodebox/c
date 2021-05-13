#include <stdio.h>

#define true 1
#define false 0

int isPrime(int n)
{
   if (n == 1)
      return false;
   int i;
   for (i = 2; i <= n / 2; i++)
   {
      if (n % i == 0)
      {
         return false;
      }
   }
   return true;
}

void printPrimeFactors(int n)
{
   int i;
   for (i = 1; i <= n; i++)
   {
      if (n % i == 0)
      { //  i is a factor
         if (isPrime(i))
         {
            printf("%d ", i);
         }
      }
   }
   printf("\n");
}

void printFactors(int n)
{
   int i;
   for (i = 1; i <= n; i++)
   {
      if (n % i == 0)
      { //  i is a factor
         printf("%d ", i);
      }
   }
   printf("\n");
}

int main()
{
   int n;

   printf("Enter a number : ");
   scanf("%d", &n);
   printf("\nFactors : ");
   printFactors(n);
   printf("Prime Factors : ");
   printPrimeFactors(n);

   printf("\n");

   return 0;
}
