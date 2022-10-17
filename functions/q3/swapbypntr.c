// WAP to swap the content of two variable using Functions and pointer variable.
//

#include<stdio.h>
void swap(int *x, int *y);
int main()
{

	int a,b;
	printf("Enter the vallue of A = ");
	scanf("%d", &a);
	printf("Enter the vallue of B = ");
        scanf("%d", &b);


	swap(&a,&b);
	printf("The New vallue after swaping the vallue of variables A= %d & B= %d\n", a,b);
	return 0;
}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
	 
	//return *x,*y;
}



