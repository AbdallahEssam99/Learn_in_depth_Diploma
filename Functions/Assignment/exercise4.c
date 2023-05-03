#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int power(int n1, int n2);
int main()
{
	int base, exp;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d", &base);
	printf("Enter power number: ");
	fflush(stdout);
	scanf("%d", &exp);
	printf("%d ^ %d = %d", base, exp, power(base, exp));
	return 0;
}
int power(int base, int exp)
{
	int res;
	if (exp != 0)
		res = base * power(base, exp - 1);
	else
		res = 1;

	return res;
}