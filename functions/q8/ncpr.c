//find the Vallue of nCr and nPr by takeing N & R from user.

#include<stdio.h>
long int fact(long int n);
 int main()
{
                long int n,r,d;
		long int c,p;

                printf("Enter a number N :");
                scanf("%ld", &n);
                printf("Enter a number R :");
                scanf("%ld", &r);

                d=n-r;
                p = fact(n)/fact(d);
		c = fact(n)/(fact(r)*fact(d));

                printf("The vallue of nPr = %ldP%ld is : %ld\n", n,r,p);
		printf("The vallue of nCr = %ldC%ld is : %ld\n", n,r,c);
                return 0;
 }
long int fact(long int n)
{

        if(n==0 || n==1)
                return 1;
        else

       return n * fact(n-1);
}

