#include <stdio.h>
#include <string.h>

typedef struct stud
{
	char name[20];
	int roll;
	float marks;
} student;

int main()
{
	student s[3];
	int i;
	printf("Enter the record of 5 students : \n");

	for (i = 0; i < 3; i++)
	{
		printf("Enter the name : ");
		gets(s[i].name);
		printf("Enter the roll no. : ");
		scanf("%d", &s[i].roll);
		printf("Enter the marks : ");
		scanf("%f", &s[i].marks);
		fflush(stdin);
	}

	printf("\nRecord of students :-\n");
	for (i = 0; i < 3; i++)
	{
		puts(s[i].name);
		printf("\n Roll : \t %d\n", s[i].roll);
		printf("Mraks : \t %f", s[i].marks);
	}

	return 0;
}
