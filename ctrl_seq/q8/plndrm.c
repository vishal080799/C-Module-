//Find a Number is Palindrome or not?
//Palindrome numbers are like {12321==12321}


#include<stdio.h>
void main()
{
	int n,m,r,rn=0;
	printf("Enter a number : \n");
	scanf("%d", &n);
	m=n;
	do
	{
		r = n %10;
		
		rn = rn*10+ r;
		n = n/10;
	}while(n!=0);

	if ( rn == m)
	{
		printf("The number you entered is a PALINDROME NUMBER :\n");
	}
	else 
		printf("The number you entered is 'NOT' a PALINDROME NUMBER :\n");

}

