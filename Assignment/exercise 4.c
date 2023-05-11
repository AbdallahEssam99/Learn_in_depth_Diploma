#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>

struct Sstudent
{
	int roll;
	int mark;
	char name[50];
};
int main(void)
{
	struct Sstudent x[10];
	int count=0;
	printf("Enter information of students\n\n");
	char f;
	for (int i = 0; i < 10; i++)
	{	char y;
		printf("Enter Name of student:"); fflush(stdout);
		scanf("%c", &f);
		scanf("%[^\n\n]s", &x[count].name);
		printf("Enter roll number:"); fflush(stdout);
		scanf("%d", &x[count].roll);
		printf("Enter student mark:"); fflush(stdout);
		scanf("%d", &x[count].mark);
		printf("\n\nif you want to add another student press 'y',else press any button.\n\n"); fflush(stdout);
		y = _getch();
		count++;
		if (y != 'y')
			break;
	}
	printf("\n\nDisplaying Student Information\n");
	for (int i = 0; i < count; i++)
	{
			printf("Name: %s\nRoll: %d\nMark: %d\n", x[i].name, x[i].roll, x[i].mark);
	}
	return 0;
}