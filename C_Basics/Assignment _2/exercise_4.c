
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&a);

	if (a == 0)
		printf("you entered Zero");
	else if(a < 0)
		printf("%d is Negative",a);
	else
		printf("%d is Positive",a);


	return 0;
}

