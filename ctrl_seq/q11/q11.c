//Search an element
//

#include<stdio.h>
void main()
{
	int a[10];
	int n;
	printf("enter numbers of list\n");
	for (int i=0;i<10;i++)
	{
		scanf("%d",a+i);
	}
	printf("Enter the number to be searched:\a");
	scanf("%d",&n);
	for (int i=0;i<10;i++)
	{
		if(n == a[i])
		{
			printf("found\n");
			break;
		}
		else {
			printf("Not found\n");
			break;
		}
	}
}
