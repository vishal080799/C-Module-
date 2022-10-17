// WAP to add first 7 terms of the following series: 1/1!+2/2!+3/3!+4/4!.......
//
#include<stdio.h>
long int fact(int n);
 void main()
{
	int i,n;
	double add=0;

	for(i=1;i<=7;i++)
	{
		add += i/(float)fact(i);
	}
	
	printf("The addition of the series 1/1!+2/2!+3/3!+4/4!....... upto 7 terms is= %lf\n",add);
               
 }
long int fact(int n)
{

        if(n==0 || n==1)
                return 1;
        else

       return n * fact(n-1);
}

