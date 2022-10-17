// Read your Name in character array . Print the Name along with the length of your name and sizeof the array.


#include<stdio.h>

int main()
{
	int n;
	char name[100];
	printf("Enter your Name length:");
        scanf("%d", &n);
	printf("Enter your name :\n");
	
	for ( int i = 0; i<=n;i++)
	{
		scanf("%c", name+i);
	}

	printf("The Name of length %d you Entered is stored in an array of size %ld : ", n, sizeof(name));
	
	for ( int i = 0;i<=n;i++)
	{
		printf("%c", name[i]);
	}
	printf("\n");
	return 0;
}




