
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		printf("\nIt's a Vowel");
	else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		printf("\nIt's a Vowel");
	else
		printf("\nIt's a Consonant");
	return 0;
}

