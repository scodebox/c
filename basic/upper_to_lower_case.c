#include <stdio.h>

int main()
{
   clear();
   showcredits();

   char ch, out;
   printf("Enter the letter : ");
   scanf("%c", &ch);

   if (ch >= 'a' && ch <= 'z')
   {
      out = (ch - 'a' + 'A');
   }
   else if (ch >= 'A' && ch <= 'Z')
   {
      out = (ch - 'A' + 'a');
   }
   else
   {
      out = ch;
   }

   printf("%c", out);

   return 0;
}
