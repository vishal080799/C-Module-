//print all prime numbers in first n numbers
#include<stdio.h>
int main()
{
	int n,p,d;
	_Bool isprime;

	printf("Enter N number:");
	scanf("%i", &n);

	for( p=2;p<=n; ++p)
	{
		isprime=1;

		for(d =2 ;d<p; ++d)
		{
			if( p % d == 0)
				isprime = 0;
		}
		if (isprime != 0)
		      printf("%i\t", p);
		}

	printf("\n");

	return 0;
}


