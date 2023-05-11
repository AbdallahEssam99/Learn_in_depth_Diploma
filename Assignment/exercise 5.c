#include <stdio.h>


#define PI 3.1415
#define area(r) (PI*r*r)


int main(void)
{
	int radius;
	float area;
	printf("Enter circle radius:");
	fflush(stdout);
	scanf("%d", &radius);

	area = area(radius);

	printf("\nArea of circle = %.2f\n", area);
	return 0;
}