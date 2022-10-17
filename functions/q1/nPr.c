//find n!/(n-r)! = nPr by taking n and r

#include<stdio.h>
long int fact(long int n);
 int main()
{
                long int n,r,d,p;

                printf("Enter a number N :");
                scanf("%ld", &n);
		printf("Enter a number R :");
                scanf("%ld", &r);

		d=n-r;
		p = fact(n)/fact(d);

                printf("The vallue of nPr = %ldP%ld is : %ld\n", n,r,p);
                return 0;
 }
long int fact(long int n)
{

        if(n==0 || n==1)
                return 1;
        else

       return n * fact(n-1);
}
