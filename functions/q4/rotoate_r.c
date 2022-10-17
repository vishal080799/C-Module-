// WAP to with a function rotoate_right(n,b). This function rotates integer n towords right by b positions.
//
#include<stdio.h>

int rotate_right( int n, int b);


int main ()

{
	int n,b;
	printf("Enter a number to rotate :");
        scanf("%d", &n);
        printf("Enter the position  :");
        scanf("%d", &b);
	printf("The value of %d, after right rotation by  %d positions is %d", n,b,rotate_right(n,b));
	return 0;
}

int rotate_right( int n, int b)
{
	return (n >> b | n << b) ;
}

