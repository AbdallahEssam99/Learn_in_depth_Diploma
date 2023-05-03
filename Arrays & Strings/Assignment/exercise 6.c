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
	char rep;
	int count = 0;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string:");
	fflush(stdout);
	(void)scanf("%[^\n]s", str);
	fflush(stdin);


	printf("\n%s\n", str);


	printf("Enter a character to be found:\n");
	fflush(stdout);
	(void)scanf(" %c", &rep);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == rep)
			count++;
	}

	printf("Frequency of %c = %d", rep, count);
	return 0;
}
