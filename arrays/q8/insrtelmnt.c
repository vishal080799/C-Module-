//Insert an element at a specified position in an array


#include<stdio.h>

void main()
{
        int a[10],i,p,n;

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

	printf("Enter the position you want where you want to change the value : \n");
	scanf("%d", &p);
	printf("Enter the new number at position %d : \n", p);
        scanf("%d", &n);

	a[p-1] = n;
	printf("The new updated array  is :\n");
        for(i=0;i<=9;i++)
        {

                printf("A[%d]= %d\n", i, a[i]);
        }
}




