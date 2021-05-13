#include <stdio.h>

int main()
{

   int i, size, index;
   int arr[100];

   printf("Enter no. of elements : ");
   scanf("%d", &size);

   printf("Enter %d elements : ", size);
   for (i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   printf("Enter array index to be deleted : ");
   scanf("%d", &index);

   arr[index] = 0;

   printf("\nArray Elements : ");

   for (i = 0; i < size; i++)
   {
      printf("%d, ", arr[i]);
   }
   printf("\b\b  \b\b\n");

   printf("\n");
   return 0;
}
