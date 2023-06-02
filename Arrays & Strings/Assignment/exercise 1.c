/*
 ============================================================================
 Name        : diploma.c//
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void fill_array(int *arr[2][2])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("\nEnter e%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
}

void print_array(int *arr[2][2])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
}
void print_sum(int *arr[2][2],int *arr1[2][2])
{
	printf("Sum of Matrices:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			int temp;
			int temp1;
			temp = *arr[i][j];
			temp1 = *arr1[i][j];
			printf("%d  ",temp+temp1);
		}
		printf("\n");
	}
}
int main(void)
{
	int arr1[2][2];
	int arr2[2][2];

	printf("Enter elements of first matrix:\n");
	fflush(stdout);
	fill_array(arr1);

	printf("Enter elements of second matrix:\n");
	fflush(stdout);
	fill_array(arr2);

	print_array(arr1);
	printf("\n");
	print_array(arr2);

	printf("\n");
	printf("Sum of Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			int temp;
			int temp1;
			temp = arr1[i][j];
			temp1 = arr2[i][j];
			printf("%d  ",temp+temp1);
		}
		printf("\n");
	}

	return 0;
}
