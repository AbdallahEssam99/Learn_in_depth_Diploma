
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;
	printf("Enter a character: ");
	fflush( stdout );
	scanf("%c",&x);
	printf("\nASCII value of %c = %d",x,x);
	fflush( stdout );
	return 0;
}

