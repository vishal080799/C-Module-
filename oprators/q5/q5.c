//
#include <stdio.h>
int main()
{
	int a,b,c,d;
	int sumr,sumi,diffr,diffi,mulr,muli;
	printf("Enter 2 complex numbers( a+ib ):");
	scanf("%d+i%d",&a,&b);
	scanf("%d+i%d",&c,&d);
	sumr = a + b;
	sumi = c + d;
	diffr = a - b;
	diffi = c - d;
	mulr = (a*c) - (b*d);
	muli = (a*d) + (b*c);
	printf("\nSum = %d+i(%d)\t",sumr,sumi);
	printf("\nDifference = %d+i(%d)\t",diffr,diffi);
	printf("\nProduct = %d+i(%d)\t",mulr,muli);
	return 0;
}
