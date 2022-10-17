//


#include<stdio.h>

void main ()
{
	int x[8] = { 10,20,30,40,50,60,70,80};
	
	printf("The meanining of x is %p\n", x);
	printf("The meanining of (x+2) is %p\n", (x+2));
	printf("The meanining of *x is %d\n", *x);
	printf("The meanining of (*x+2) is %d\n", (*x+2));
	printf("The meanining of *(x+2) is %d\n", *(x+2));
}



