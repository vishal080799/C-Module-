// WAP to print array in reverse order


#include<stdio.h>

void main()
{
	int a[10],i;

	printf("Enter the array elements :\n");
        for(i=0;i<=9;i++)
        {
                
                printf("A[%d]= ", i);
		scanf("%d",a+i);
        }


	printf("The array you entered is :\n");
	for(i=0;i<=9;i++)
	{
	
		printf("A[%d]= %d\n", i, a[i]);
	}
       
	printf("The Reverse of array is :\n");
	for ( i=9;i>=0;i--)
        {       
                printf("Rev_A[%d]=%d\n",(9-i), a[i]);
        }
}	




