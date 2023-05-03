#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	int flag = 0;
	int n1, n2;
	printf("Enter two intervals: ");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);

	printf("Prime numbers between %d and %d are:", n1, n2);


	for (int i = n1+1; i <= n2; i++)
	{
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
			}
		}
		if (flag == 0)
			printf("%d\n", i);
		flag = 0;
	}
	printf("%d   %d", n1, n2);

	return 0;


}
