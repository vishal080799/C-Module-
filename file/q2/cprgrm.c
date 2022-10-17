//  remove all comments from the c program.:

#include<stdio.h>

void main()
{
        int a[10],i, b[10];

        // Taking Input from user.
        printf("Enter the array elements :\n");
        for(i=0;i<=9;i++)
        {

                printf("A[%d]= ", i);
                scanf("%d",a+i);
        }

        // Printing the array.
        printf("The array you entered is :\n");
        for(i=0;i<=9;i++)
        {

                printf("A[%d]= %d\n", i, a[i]);
        }

        //copying the array elements in another array .
         printf("The copied array in same order is  :\n");
        for(i=0;i<=9;i++)
        {
                b[i] = a[i];

                printf("B[%d]= %d\n", i, b[i]);
        }

        //copying the array elements in reverse order in another array.
         printf("The copied array in reverse order is  :\n");
	 for(i=0;i<=9;i++)
        {
                b[i] = a[9-i];

                printf("B[%d]= %d\n", i, b[i]);
        }
}


