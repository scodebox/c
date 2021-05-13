#include <stdio.h>

#define N 5

int isPrime(int n)
{
   int i;
   if (n == 1)
      return 0;
   for (i = 2; i <= n / 2; i++)
   {
      if (n % i == 0)
         return 0;
   }
   return 1;
}

int main()
{

   int i, arr[N];

   printf("Enter the numbers : ");
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("\n\n");

   for (i = 0; i < 5; i++)
   {
      if (isPrime(arr[i]))
      {
         printf("%d is a prime number\n", arr[i]);
      }
      else
      {
         printf("%d is NOT a prime number\n", arr[i]);
      }
   }

   printf("\n");
   return 0;
}