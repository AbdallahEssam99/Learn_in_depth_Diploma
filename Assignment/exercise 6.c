#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>

union job
{
	char name[32];
	float a;
	int b;
}u;
struct job1
{
	char names[32];
	float x;
	int y;
}s;

int main(void)
{
	printf("My expectations are Union = 32, Struct = 40\n\n");
	printf("size of Union = %d\n\n", sizeof(u));
	printf("size of Struct = %d\n", sizeof(s));
	return 0;
}