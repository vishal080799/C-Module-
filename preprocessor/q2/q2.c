#include<stdio.h>
#define DEBUG
int xy=12;


void func1()
	{
		printf("In function 1");
	}
void func2()
	{
		printf("In function 2");
	}
void func3()
        {
                printf("In function 3");
        }

int main()
{
	printf("%d", xy);
#ifdef DEBUG
	func1();
#else
	func3();
#endif
	return 0;
}


