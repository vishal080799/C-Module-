#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter two numbers:\n");
	scanf("%d,%d", &num1, &num2);
	printf("\n The sum is = %d",num1+num2);
	printf("\n The Difference is = %d",num1-num2);
	printf("\n The Product is = %d",num1*num2);
	printf("\n The Quotient is = %f",(float)num1/num2);
	printf("\n The Remainder is = %d",num1%num2);
}
