
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char op;
	float a,b,result;
	int flag=0;
	printf("Enter an operator (+,-,*,/): ");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands:");
	fflush(stdout);
	scanf("%f %f",&a,&b);


	switch (op)
	{
	case'+':
		result = a + b;
		break;
	case'-':
		result = a - b;
		break;
	case'*':
		result = a * b;
		break;
	case'/':
		result = a / b;
		break;
	default:
		printf("Wrong operand");
		flag=1;
		break;
	}
	if (flag!=1)
	{
	printf("%.2f %c %.2f = %.2f",a,op,b,result);
	}

	return 0;
}

