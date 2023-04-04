
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int a,sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);


	for(int i=0;i<=a;i++)
	{
		sum += i;
	}
	printf("Sum = %d",sum);

	return 0;
}

