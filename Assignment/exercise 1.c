#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>


void point(int m)
{
	printf("Address of m : %x\nValue of m : %d\n\n", &m,m);
	int* ab = &m;
	printf("\n\nAddress pointer ab : %x\nContent of pointer ab : %d\n\n", &m, *ab);
	m = 34;
	printf("\n\nThe value of x assigned to 34 now");
	printf("\n\nAddress pointer ab : %x\nContent of pointer ab : %d\n\n", &m, *ab);
	*ab = 7;
	printf("\n\nThe pointer of variable ab is assigned with the value 7 now");
	printf("\n\nAddress of variable m : %x\nValue of m : %d\n\n", &m, *ab);
}
int main(void)
{
	int x = 29;
	point(x);
	return 0;
}