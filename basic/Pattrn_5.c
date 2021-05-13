#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
   // char ch='*';
    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
            printf("%3c",'*');
        }
        printf("\n");
    }

    getch();
    return 0;
}



/*


  *
  *  *
  *  *  *
  *  *  *  *
  *  *  *  *  *
  *  *  *  *  *  *
  *  *  *  *  *  *  *
  *  *  *  *  *  *  *  *
  *  *  *  *  *  *  *  *  *

*/
