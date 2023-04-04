
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char a;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&a);

	if(isalpha(a))
		printf("%c is an alphabet",a);
	else
		printf("%c is not an alphabet",a);


	return 0;
}

