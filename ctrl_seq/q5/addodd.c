//add all odd numbers till 
//
#include<stdio.h>
void main()

{
        int n,i = 1,sumodd = 0;
        printf("Enter number N to Find the sum of odd numbers  till:\n ");
        scanf("%d", &n);
	while (i < n)
	{
		sumodd = sumodd + i;
		i=i+2;
	}
	printf("sum of odd numbers till %d is %d\n", n, sumodd);

	
}

