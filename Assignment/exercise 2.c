#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

struct Sdistance
{
	float feet;
	float inch;
}; 

int main(void)
{
	struct Sdistance x1,x2;
	printf("Enter Information of first distance\n");
	fflush(stdout);
	printf("Enter feet:");
	fflush(stdout);
	scanf("%f", &x1.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f", &x1.inch);

	printf("\n\n");
	printf("Enter Information of second distance\n");
	fflush(stdout);
	printf("Enter feet:");
	fflush(stdout);
	scanf("%f", &x2.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f", &x2.inch);


	printf("Sum of distances = %.2f' - %.2f\"", (x1.feet + x2.feet), (x1.inch + x2.inch));

	return 0;
}