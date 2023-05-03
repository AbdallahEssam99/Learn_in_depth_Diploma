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
	int rows,cols;
	printf("Enter rows and columns of a matrix:");
	fflush(stdout);
	scanf("%d %d",&rows,&cols);

	int arr[rows][cols];

	printf("Enter elements of matrix:");
	fflush(stdout);

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("\nEnter element a%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nEntered Matrix:\n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose of Matrix:\n");
	for(int i=0;i<cols;i++)
	{
		for(int j=0;j<rows;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}


	return 0;
}
