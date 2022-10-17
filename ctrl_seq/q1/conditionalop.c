#include<stdio.h>
void main()
{
        int i,j;
        printf("Enter two Variable Values i & j : \t");
        scanf("%d,%d", &i, &j);

	(i==20 ||j==20)?(printf("Atleast one Variable is Having 20\n")):(printf("Both variables are not having 20 .\n"));

	( i<=40 && j<=40 )?(printf("Both are less or Equal to 40 \n")):(printf("Both are not less or Equal to 40 \n"));

}

