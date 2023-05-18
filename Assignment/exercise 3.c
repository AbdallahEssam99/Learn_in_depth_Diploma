#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>



int main(void)
{
	char* stptr;
	char* revptr;
	char string[50];
	char revstring[50];
	int i = -1;
	stptr = string;
	revptr = revstring;

	printf("Enter sentence:");
	fflush(stdout);
	scanf("%[^\n]s", &string);

	while (*stptr)
	{
		stptr++;
		i++;
	}
	while (i >= 0)
	{
		stptr--;
		*revptr = *stptr;
		revptr++;
		i--;
	}
	*revptr = '\0';
	printf("Reverse string : %s", revstring);

	
	return 0;
}