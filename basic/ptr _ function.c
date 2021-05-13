#include <stdio.h>

typedef struct
{
     char name[50];
     int roll;
     float marks;
} Student;

void printStudent(Student s)
{
     printf("%s : %d : %f\n", s.name, s.roll, s.marks);
}

void printStudentPtr(Student *ptr)
{
     printf("%s : %d : %f\n", ptr->name, ptr->roll, ptr->marks);
}

int main()
{
     clear();
     showcredits();

     Student s1, *ptr;

     ptr = &s1;

     printf("Enter the name : ");
     gets(ptr->name);
     printf("Enter the roll no. : ");
     scanf("%d", &(ptr->roll));
     printf("Enter the marks : ");
     scanf("%f", &(ptr->marks));
     printf("\n");
     fflush(stdin); //  flush the input buffer

     printStudent(s1);
     printStudentPtr(ptr);

     printf("\n");

     return 0;
}
