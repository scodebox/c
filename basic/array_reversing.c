#include <stdio.h>

int main()
{

   int i, size, temp;
   int arr[100];

   printf("Enter no. of elements : ");
   scanf("%d", &size);

   printf("Enter %d elements : ", size);
   for (i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < size / 2; i++)
   {
      temp = arr[i];
      arr[i] = arr[size - i - 1];
      arr[size - i - 1] = temp;
   }

   printf("\nArray Elements after reversing : ");

   for (i = 0; i < size; i++)
   {
      printf("%d, ", arr[i]);
   }
   printf("\b\b  \b\b\n");

   printf("\n");
   return 0;
}
