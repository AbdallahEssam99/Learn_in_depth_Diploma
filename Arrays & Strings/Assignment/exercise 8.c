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
	int size;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string:");
	fflush(stdout);
	(void)scanf("%[^\n]s", str);
	fflush(stdin);


	size = strlen(str);

	for (int i = size; i>=0; i--)
	{
			printf("%c",str[i-1]);
	}

	return 0;
}
