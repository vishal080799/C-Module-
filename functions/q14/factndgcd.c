//WAP to calculate factorial and GCD using recursion

#include<stdio.h>
long int fact(int n);
long int gcd(int n, int m);
 int main()
{
                int n,m;
                printf("Enter a number to find its Factorial :");
                scanf("%d", &n);
		printf("Enter a number to find its Factorial :");
                scanf("%d", &m);
                printf("the factorial of %d is : %ld\n", n,fact(n));
		printf("the factorial of %d is : %ld\n", m,fact(m));
		printf("the  GCD  of %d and %d is : %ld\n", n,m,gcd(n,m));
                return 0;
 }
long int fact(int n)
{

        if(n==0 || n==1)
                return 1;
        else

       return n * fact(n-1);
}
long int gcd( int n,int m)
{
	if(m==0)
	{
		return n;
	}
	else
	{
		return gcd(m,n%m);
	}

/*	long int gcd;
	for (int i = 1;i<=n && i<=m ; i++)
	{
		if (m%i==0 && n%i==0 )
		{
			gcd = i;
		}
	}
		return gcd;*/
	
}


