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
	int n;
	float sum=0;
	printf("Enter the number of data:");
	fflush(stdout);
	scanf("%d",&n);
	float *arr;
	arr = (float*) malloc(n * sizeof(float));

	for(int i=0;i<n;i++)
	{
		printf("\nEnter number:");
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum += arr[i];
	}
	printf("\nAverage = %.2f",(sum/(n*1.0)));

	return 0;
}
