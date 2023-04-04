
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	printf("Enter an integer you want to check: ");
	fflush( stdout );
	scanf("%d",&x);

	if(x%2==0)
	{
		printf("%d is Even",x);
		fflush(stdout);
	}
	else
	{
		printf("%d is Odd",x);
		fflush(stdout);
	}
	return 0;
}

