// find the sum of digits of a Number.


#include<stdio.h>
void main()
{
	int n,sum=0,r;
	printf("Enter any number to find its sum of digits:\n");
	scanf("%d", &n);
	while ( n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The Sum of Digits is : %d", sum);
}


