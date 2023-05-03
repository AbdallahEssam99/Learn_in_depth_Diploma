#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



int fact(int x)
{
	static int fct=1;
	fct *= x;
	x--;
	if(x!=0)
		fact(x);
	else
		return fct;
}
int main(void)
{
	int n,ans;
	printf("Enter number you want to calculate it's factorial:");
	fflush(stdout);
	scanf("%d",&n);
	ans = fact(n);
	printf("Factorial of number %d is equal to = %d ",n,ans);
	return 0;


}
