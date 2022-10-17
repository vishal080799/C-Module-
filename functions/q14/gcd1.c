#include<stdio.h>
long int gcd( int n,int m);
int main()
{
        int n,m;
        printf("Enter first number :");
        scanf("%d", &n);
        printf("Enter secend  number :");
        scanf("%d", &m);
        printf("the  GCD  of %d and %d is : %ld\n", n,m,gcd(n,m));
        return 0 ;

}

long int gcd( int n,int m)
{
	if (m == 0)
	{
		return n;
	}
	if (n == 0)
	{
		return m;
	}
	if( m>=n)
	{
		return gcd(n,m%n);
	}
	if(n>=m)
	{
		return gcd(m,n%m);
	}

}


