//Using assignment oprator perform sum of two numbers and store sum in one of the variable itself.
//
#include<stdio.h>
int main()
{

	int a,b;
	printf("Enter two numbers : \t");
	scanf("%d, %d", &a, &b);

	a += b;
	printf("sum of these two numbers are : %d",a);
	return 0;

}

