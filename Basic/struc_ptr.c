#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct stud{
	char name[20];
	int roll;
	float marks;
}student;
int main()
{
	student s[2], *ptr;
	ptr=s;
	(ptr+0)->name[20]="Suvam basak";
	(ptr+0)->roll=58;
	(ptr+0)->marks=7.12;
	(ptr+1)->name[20]="dipak da";
	(ptr+1)->roll=60;
	(ptr+1)->marks=8.12;
	
	printf("Record of students : \n");
	printf("\n Name :  %S",((ptr+0)->name));
	printf("\n Roll  : %d",(ptr+0)->roll);
	printf("\n Marks :  %f",(ptr+0)->marks);
	printf("\n Name :  %s",(ptr+1)->name);
	printf("\n Roll :  %d",(ptr+1)->roll);
	printf("\n Marks :  %f",(ptr+1)->marks);
	
	getch();
	return 0;
}

