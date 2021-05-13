#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int size)
{
   int i, j;
   for (i = size - 1; i > 0; i--)
   {
      for (j = 0; j < i; j++)
      {
         if (arr[j] > arr[i])
         {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main()
{

   int *arr;
   int size, i;
   printf("Enter size of array : ");
   scanf("%d", &size);
   arr = malloc(size * sizeof(int));

   printf("Enter %d numbers : ", size);
   for (i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   bubbleSort(arr, size);

   printf("Sorted Array : ");
   for (i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }

   printf("\n");
   return 0;
}
