#include<stdio.h>
#include<conio.h>
#include "MyLib.h"

typedef struct{
        unsigned dd;
        unsigned mm;
        unsigned yyyy;
} DOB;

typedef struct{
        int roll;
        float marks;
        DOB dob;
} Student;

int main()
{
    clear();
    showcredits();
    
    Student s1;
    s1.roll=46;
    s1.marks=8.60;
    s1.dob.dd=25;
    s1.dob.mm=10;
    s1.dob.yyyy=1995;
    
    printf("%d : %f : %d/%d/%d\n",s1.roll,s1.marks,s1.dob.dd,s1.dob.mm,s1.dob.yyyy);
    
    printf("\n\nPress any key to continue ...");
    getch();
    return 0;
}
