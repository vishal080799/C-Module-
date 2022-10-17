// delete an specified intiger from an array .


#include<stdio.h>

void main()
{
        int a[10],i,n;

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

        printf("Enter the intiger  you want to delete: \n");
        scanf("%d", &n);

	printf("The array you entered without integer %d is :\n", n);
        for(i=0;i<=9;i++)
        {
		if ( a[i] == n)
		{
			a[i] = 0;
		}

                printf("A[%d]= %d\n", i, a[i]);
        }

}
