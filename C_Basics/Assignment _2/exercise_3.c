
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,max;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%d %d %d",&a, &b, &c);

	if(a>b && a>c)
		max = a;
	else if(b>c)
		max = b;
	else
		max = c;

	printf("Largest number: %d",max);
	return 0;
}

