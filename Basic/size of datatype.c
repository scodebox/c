#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

int main()
{
    clear();
    showcredits();
    
    printf("The size of char is \t\t= %d byte(s)\n",sizeof(char));
    printf("The size of int is \t\t= %d byte(s)\n",sizeof(int));
    printf("The size of float is \t\t= %d byte(s)\n",sizeof(float));
    printf("The size of double is \t\t= %d byte(s)\n\n",sizeof(double));
    
    printf("The size of short int is \t= %d byte(s)\n",sizeof(short int));
    printf("The size of long int is \t= %d byte(s)\n",sizeof(long int));
    printf("The size of signed int is \t= %d byte(s)\n",sizeof(signed int));
    printf("The size of unsigned int is \t= %d byte(s)\n\n",sizeof(unsigned int));
    
    printf("\nHexadecimal of 10 \t\t= %#x\n",10);
    printf("Octal of 10 \t\t\t= %o\n",10);
    printf("Decimal of 10 \t\t\t= %d\n",10);
    
    printf("\nSize of \'7\' \t\t\t= %d",sizeof('7'));
    printf("\nSize of \"7\" \t\t\t= %d",sizeof("7"));
    printf("\nSize of 7 \t\t\t= %d",sizeof(7));
    
    printf("\n\n\nOther testing : see code");
    
    printf("\n\n%d");
    printf("\n%c");
    printf("\n%f");
    
    float a=4/2;
    printf("\n\n%f %f",a,4/2);  //  this happens because 4/2 is treated as an int
    
    a=4;
    int b=2;
    printf("\n\n%f %d",b/a,b/a);
    
    printf("\n\n%d",sizeof(4)/sizeof(2.0));
    printf("\n%d",sizeof(4)/sizeof(2.0f));
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
