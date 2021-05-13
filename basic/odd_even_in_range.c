#include <stdio.h>

int main()
{

   int lower, upper;
   printf("Enter the lower limit : ");
   scanf("%d", &lower);
   printf("Enter the upper limit : ");
   scanf("%d", &upper);

   while (lower <= upper)
   {
      if (lower % 2 == 0)
      {
         printf("%d is even\n", lower);
      }
      else
      {
         printf("%d is odd\n", lower);
      }
      lower++;
   }

   printf("\n");

   return 0;
}
