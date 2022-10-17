//WAP with a recursive function itoa() which converts integers to strings
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* itoa(int n,char* s,int b)
{
	int n,i,r;
	char = s[10];
	printf("Enter Integer\n");
	scanf("%d", &n);
	//printf("The string is %s",s);

	int i = 0;
	if (n == 0)
	{
		s[i++] = '0';
		s[i] = '\0';
		return s;
	}
	else 
	{
		while( n !=0)
		{
			r = n % 10;
			s[i++] = r;
			n = n / 10;
		}
	}
	printf("The string is %s",s);
	return s;
}


