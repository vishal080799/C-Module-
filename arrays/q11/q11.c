#include<stdio.h>
int main()
{
	int a[20],b[20],c[20];
	int l,m,n;
	printf("Enter length of a: ");
	scanf("%d",&n);
	printf("Enter length of b: ");
	scanf("%d",&m);
	l=m+n;

	printf("enter the  element of 1st one\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the  element of 2nd one\n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf(" element of 1st one\n");
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("element of 2nd one\n");
	for(int i=0;i<m;i++)
	{
		printf("%d",b[i]);
	}
	printf("\n");

	printf("conceded array\n");
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	int j=0;
	for(int i=n;i<l;i++)
	{
		c[i]=b[j++];	
	}
	for(int i=0;i<l;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}


