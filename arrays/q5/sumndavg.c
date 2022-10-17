// calculate sum and average of an arrray.


#include<stdio.h>

void main()
{
        int a[10],i,n,sum=0,avg;

	printf("Enter the number of elements of an array:\n");
	scanf("%d", &n);

        printf("Enter the array elements :\n");
        for(i=0;i<n;i++)
        {

                printf("A[%d]= ", i);
                scanf("%d",a+i);
        }


        printf("The array you entered is :\n");
        for(i=0;i<n;i++)
        {

                printf("A[%d]= %d\n", i, a[i]);
        }

	printf("The sum of array you entered is :");
        for(i=0;i<n;i++)
        {

                sum = sum + a[i];
        }
	printf("%d\n", sum);
	avg = sum / n;
	printf("The average of array you entered is = %d\n", avg);
}




