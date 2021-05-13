#include <stdio.h>

int main()
{
   int a, b, c;
   printf("Enter 3 numbers : ");
   scanf("%d%d%d", &a, &b, &c);

   if (a == b && b == c)
   {
      printf("\n\na, b & c are equal\n");
   }
   else
   {
      if (a == b)
      {
         printf("\n\na & b are equal\n");
      }
      if (b == c)
      {
         printf("\n\nb & c are equal\n");
      }
      if (c == a)
      {
         printf("\n\na & c are equal\n");
      }
   }

   if (a > b && a > c)
   {
      printf("\n%d is greatest\n", a);
   }
   else if (b > c)
   {
      printf("\n%d is greatest\n", b);
   }
   else
   {
      printf("\n%d is greatest\n", c);
   }

   printf("\n");

   return 0;
}
