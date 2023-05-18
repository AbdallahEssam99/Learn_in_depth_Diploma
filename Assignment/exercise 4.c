#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>



int main(void)
{
	int size;
	int arr[15];
	int* ptr = arr;
	printf("Enter number of elements you want in the array:");
	fflush(stdout);
	scanf("%d", &size);
	printf("enter array elements:");
	fflush(stdout);
	for (int i = 0; i < size; i++)
	{
		ptr++;
		scanf("%d", &arr[i]);
	}
	//ptr =arr;
	printf("\n\nReversed Array:\n");
	for (int i = size-1; i >= 0; i--)
	{
		ptr--;
		printf(" %d\n", *ptr);
		
	}

	return 0;
}