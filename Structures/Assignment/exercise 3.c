#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

struct SComplex
{
	float real;
	float imaginary;
}; 

void Sum(struct SComplex x, struct SComplex y)
{
	struct SComplex z;
	z.real = x.real + y.real;
	z.imaginary = x.imaginary + y.imaginary;

	printf("Sum = %.2f + %.2fi", z.real, z.imaginary);
}
int main(void)
{
	struct SComplex x1,x2;
	printf("For 1st Complex number\n\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdout);
	scanf("%f %f", &x1.real,&x1.imaginary);
	
	
	printf("For 2nd Complex number\n\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdout);
	scanf("%f %f", &x2.real, &x2.imaginary);

	Sum(x1, x2);

	return 0;
}