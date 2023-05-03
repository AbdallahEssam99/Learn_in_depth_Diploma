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
	int n,extra,location;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number of elements:");
	scanf("%d",&n);

	int *arr;
	arr = (int*) malloc(n * sizeof(int));

	printf("Enter elements:\n");


	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be inserted: ");
	scanf("%d",&extra);

	printf("Enter the location: ");
	scanf("%d",&location);

	arr[location]=extra;


	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
