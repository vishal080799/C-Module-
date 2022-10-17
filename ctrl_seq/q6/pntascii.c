//print ASCII vallue of alphabets( A-Z and a-z ) both Uppercase & Lowercase and Digits (0-9).

#include<stdio.h>
char c;
void main()
{
	printf("Uppercase Alphabet\n");
	for ( c= 'A';c>='A' && c<= 'Z' ;c++)
	{
		 printf("ASCII Vallue of '%c' is %d \n", c,c);
	}
	printf("Lowercase Alphabet\n");
	for ( c = 'a'; c>='a' && c<= 'z'; c++)
	{
		printf("ASCII Vallue of '%c' is %d \n", c,c);
	}
	printf("Digits\n");
	for ( c= '1';c>='1' && c<= '9' ;c++)
        {
                 printf("ASCII Vallue of '%c' is %d \n", c,c);
        }
}



