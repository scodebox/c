#include <stdio.h>

typedef struct
{
    char name[50];
    int roll;
    float marks;
} Student;

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

    printf("%s : %d : %f\n", ptr->name, ptr->roll, ptr->marks);

    printf("\n");

    return 0;
}
