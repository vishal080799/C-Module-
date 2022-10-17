// find factorial of a number.
#include<stdio.h>
void main()
{
	int n,i,fact=0;

	printf("Enter the number N :\t");
	scanf("%d", &n);
	fact = n;
	printf("Fact is %d", fact);

	for(i=1;i < n;i++)
	{
	     fact = fact * i;

	}
	 printf("Fact is %d", fact);
}

