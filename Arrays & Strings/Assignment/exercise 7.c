/*
 ============================================================================
 Name        : diploma.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char str[100];
	int count = 0;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string:");
	fflush(stdout);
	(void)scanf("%[^\n]s", str);
	fflush(stdin);


	printf("\n%s\n", str);


	for (int i = 0; str[i] != '\0'; i++)
	{
			count++;
	}

	printf("Length of string  = %d",count);
	return 0;
}
