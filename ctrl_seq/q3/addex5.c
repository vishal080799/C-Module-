// add N numbers except the numbers deviding by 5 only.
#include<stdio.h>
 int main()
{
	int i,n,sum=0;
	printf("Enter N number:");
	scanf("%d", &n);

	for( i=1;i<=n;i++)
	{
		if(i % 5 == 0)
		{
			continue;
		}
		sum = sum + i;
	}
	printf("The Sum is : %d", sum);
	return 0;
}



