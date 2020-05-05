#include<stdio.h>
#include<conio.h>
//#include<string.h>
typedef struct dt{
        int dd;
        int mm;
        int yy;
        }dob;
typedef struct stud
{
       int roll;
       float marks;
       dob x;
       }student;
int main()
{
    student s1;
    s1.roll=10;
    s1.marks=95.5;
    s1.x.dd=19;
    s1.x.mm=07;
    s1.x.yy=1996;           
         printf("\n%d",s1.roll);
  printf("\n%f",s1.marks);
  printf("\n%d",s1.x.dd);
  printf("\n%d",s1.x.mm);
  printf("\n%d",s1.x.yy); 
      
   getch();
   return 0;
}

    
