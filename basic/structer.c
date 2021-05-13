#include <stdio.h>

typedef struct
{
   char name[50];
   int roll;
   float marks;
} Student;

int main()
{
   Student arr[5];
   int i;

   printf("Input record of 5 students :\n\n");
   for (i = 0; i < 5; i++)
   {
      printf("Enter the name : ");
      gets(arr[i].name);
      printf("Enter the roll no. : ");
      scanf("%d", &(arr[i].roll));
      printf("Enter the marks : ");
      scanf("%f", &(arr[i].marks));
      printf("\n");
      fflush(stdin); //  flush the input buffer
   }

   printf("%-50s %5s %15s\n\n", "Name", "Roll", "Marks");
   for (i = 0; i < 5; i++)
   {
      printf("%-50s %5d %15f\n", arr[i].name, arr[i].roll, arr[i].marks);
   }

   return 0;
}
