#include <stdio.h>

typedef struct DOB
{
	int DD;
	int MM;
	int YY;
} DOB;

typedef struct info
{
	int roll;
	float marks;
	DOB DOB;
} info;

int main()
{
	info s;
	s.roll = 58;
	s.marks = 7.12;
	s.DOB.DD = 19;
	s.DOB.MM = 07;
	s.DOB.YY = 1996;

	printf("Roll : %d\n", s.roll);
	printf("Marks : %f\n", s.marks);
	printf("Date : %d\n", s.DOB.DD);
	printf("Month : %d\n", s.DOB.MM);
	printf("Year : %d", s.DOB.YY);

	return 0;
}
