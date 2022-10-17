//WAP with two function itob(n,s) and itoh(n,s) to convert integer into binary and hexa and charecter reperesentation in s 
//

#include<stdio.h>

int n,s[10];
int itob(int n, int s[10]);
int itoh( int n, int s[10]);
void main()
{
        printf("Enter a number :\n");
        scanf("%d", &n);
        itob(n,s);
	itoh(n,s);
       
}

int  itob(int n,int s[10])
{
	int i;
        for(i=0;n>0;i++)
        {
        s[i] = n%2;
        n = n/2;
        }
	printf("Binary representation is =");
	for (i = i-1;i>=0;i--)
	{
	printf("%d", s[i]);
	}
	printf("\n");
	return 0;

}

int  itoh(int n,int s[10])
{
        int i;
        for(i=0;n>0;i++)
        {
        s[i] = n%16;
        n = n/16;
        }
        printf("Hexadecimal representation is =");
        for (i = i-1;i>=0;i--)
        {
        printf(" %d", s[i]);
        }
        printf("\nIn Hexadecimal we represent 10=A , 11=B , 12=C , 13=D, 14=E, 15=F\n");
        return 0;

}

