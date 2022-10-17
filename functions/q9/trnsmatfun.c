// WAP to get transpose of a matrix using Function .
//

#include<stdio.h>
int main ()
{
        int m[10][10],Tm[10][10],row,col;

        printf("Enter rows and coloums of mattrix : ");
        scanf("%d,%d", &row,&col);

        printf("Enter Elements  of mattrix :\n ");

        for(int i = 0; i < row;i++)
        for (int j = 0 ; j < col;j++)
        {
        printf("Enter element m %d%d ",i+1, j+1);
        scanf("%d", & m[i][j]);
        }

        for(int i = 0; i < row;i++)
        for (int j = 0 ; j < col;j++)
        {
        printf("%d ", m[i][j]);
        if ( j == col -1 )
        {
                printf("\n");
        }
        }
	return 0;
}


