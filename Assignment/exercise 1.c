#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

struct Sstudent
{
	int roll;
	int mark;
	char name[50];
}; 

int main(void)
{
	struct Sstudent x;
	printf("Enter Name of student:");
	fflush(stdout);
	scanf("%[^\n]s", &x.name);
	printf("Enter roll number:");
	fflush(stdout);
	scanf("%d", &x.roll);
	printf("Enter student mark:");
	fflush(stdout);
	scanf("%d", &x.mark);


	printf("\n\nDisplaying Student Information\n");
	printf("Name: %s\nRoll: %d\nMark: %d\n", x.name, x.roll, x.mark);
	return 0;
}















