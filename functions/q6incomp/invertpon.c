// WAP using invertponwards(n,p,b) . This function inverts b bits of  intiger n from p position and leaving all other unchanged.

#include<stdio.h>
#include<stdlib.h>
int invertponwards( int n,int p, int b);


int main ()

{
        int n,b,p;
        printf("Enter a number :");
        scanf("%d", &n);
        printf("Enter the number of bits you want to invert   :");
        scanf("%d", &b);
	printf("Enter the position  :");
        scanf("%d", &p);
        printf("The value of %d, after inversion of %d bits from %dth positions is %d\n", n,b,p,invertponwards(n,p,b));

        return 0;
}

int invertponwards( int n,int p, int b)
{




	return 0;
}

