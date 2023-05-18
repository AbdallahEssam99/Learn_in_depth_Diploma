#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>

 
int main(void)
{
	char alphabet[27];
	char* ptr = alphabet;
	//alphabet[0] = 'A';
	for (int i = 0; i < 26; i++)
	{
		*ptr = i + 'A';
		ptr++;
	}

	ptr = alphabet;

	for (int i = 0; i < 26; i++)
	{
		printf("%c  ", *ptr);
		ptr++;
	}
	return 0;
}