
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b;
	printf("Enter value of a: ");
	fflush( stdout );
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush( stdout );
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping, Value of a = %.2f",a);
	printf("\nAfter swapping, Value of b = %.2f",b);
	fflush( stdout );
	return 0;
}

