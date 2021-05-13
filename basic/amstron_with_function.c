#include <stdio.h>

int isArmstrong(int n)
{
   int r, sum = 0, t = n;
   while (n > 0)
   {
      r = n % 10;
      sum += r * r * r;
      n /= 10;
   }
   return (t == sum);
}

int main()
{

   int n;
   printf("Enter a number : ");
   scanf("%d", &n);
   if (isArmstrong(n))
   {
      printf("\n%d is armstrong", n);
   }
   else
   {
      printf("\n%d is not armstrong", n);
   }

   return 0;
}
