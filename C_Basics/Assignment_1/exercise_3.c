
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,x;
	printf("Enter two integers: ");
	fflush( stdout );
	scanf("%d %d",&x,&n);
	printf("\nSum: %d",n+x);
	fflush( stdout );
	return 0;
}

