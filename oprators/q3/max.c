// find the maximum number b/w Two numbers using conditional oprator
//

#include<stdio.h>
void main()
{
	int a,b ;
	printf("Enter two numbers to check The maximum one.:");
	scanf("%d , %d", &a,&b);

	(a > b)?(printf("The maximum number in between two is:%d\n ", a)):(printf("The maximum number in between two is:%d\n ", b));
}
