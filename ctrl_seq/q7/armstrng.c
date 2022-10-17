// find whether a number is armstrong or not?

#include<stdio.h>
int n,r,sum,m;
void main()
{
	printf("Enter the Number : \n");
	scanf("%d", &n);
	m = n;

       do
       {
	       r=n%10;
	       sum = sum +  (r*r*r);
	       n = n/10;
       }while(n >0 );
       
     if( sum == m)
       {
	     printf("The Number you Entered is an ARMSTRONG NUMBER \n");
       }
       else
       {
	     printf("The Number you Entered is 'not' an ARMSTRONG NUMBER \n");
       }
}
