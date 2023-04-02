
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n,x;
	printf("Enter two numbers: ");
	fflush( stdout );
	scanf("%f %f",&x,&n);
	printf("\nSum: %.2f",n+x);
	fflush( stdout );
	return 0;
}

