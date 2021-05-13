#include <stdio.h>

typedef struct
{
   char name[50];
   int roll;
   float marks;
} Student;

int main()
{
   Student arr[5], *ptr;
   int i;

   printf("Input record of %d students :\n\n", 5);
   for (i = 0, ptr = arr; i < 5; i++, ptr++)
   {
      printf("Enter the name : ");
      gets(ptr->name);
      printf("Enter the roll no. : ");
      scanf("%d", &(ptr->roll));
      printf("Enter the marks : ");
      scanf("%f", &(ptr->marks));
      printf("\n");
      fflush(stdin); //  flush the input buffer
   }

   printf("%-50s %5s %15s\n\n", "Name", "Roll", "Marks");
   for (i = 0, ptr = arr; i < 5; i++, ptr++)
   {
      printf("%-50s %5d %15f\n", ptr->name, ptr->roll, ptr->marks);
   }

   printf("\n");

   return 0;
}
