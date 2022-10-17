// store odd and even elements of an array in two different arrays


#include<stdio.h>

void main()
{
        int a[10],i,odd[10],even[10], o=0,e=0;

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


       for(i=0;i<=9;i++)
       {
	if( a[i] % 2 == 0)
	{
           even[e++] = a[i] ;
	}
	else
	{
		odd[o++] = a[i];
	}
	}




       printf("The even elements is \n");
       for(i=0;i<e;i++)
       {
	       printf("even[%d] = %d\n", i, even[i]);
       }
       printf("The odd elements is \n");
       for(i=0;i<o;i++)
       {
	       printf("odd[%d] = %d\n", i, odd[i]);
       }

}
			
