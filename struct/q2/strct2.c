//
//


#include<stdio.h>

struct test1
{
	int a;
	char b;
}s;

union test2
{
	int a;
	char b;
}u;

void main()
{
	printf("size of structure is : %ld\n", sizeof(s));
	printf("size of Union is : %ld\n", sizeof(u));
}

