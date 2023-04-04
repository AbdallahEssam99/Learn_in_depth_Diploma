
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int a,fact=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);

	if(a==0)
		printf("Factorial = 1");
	else if(a < 0)
	{
		printf("Error!!!, Factorial of negative numbers doesn't exist");
	}

	else
	{
			for(int i=1;i<=a;i++)
			{
				fact *= i;
			}
			printf("Factorial = %d",fact);
	}


	return 0;
}

