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
	return 0;
}

long int gcd( int n,int m)
{

     long int gcd;
     for (int i = 1;i<=n && i<=m ; i++)
      {
         if (m%i==0 && n%i==0 )
           {
               gcd = i;
            }
      }
     return gcd;

}

