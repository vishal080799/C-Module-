// print ASCII vallue of alphabets( A-Z and a-z ) both Uppercase & Lowercase and Digits (0-9).

#include<stdio.h>
char c;
void main()
{
//	printf("Enter an alphabet either in Lowercase (a-z) or Uppercase (A-Z) or Digits (1-9) :\n");
	printf("Enter Any charecter to find its ASCII value.\n");

	scanf(" %c", &c);

	printf("ASCII Vallue of '%c' is %d \n", c,c);
/*	if (c == '\0')
	{
		printf("ASCII vallue of '%c' is 0\n ");
	}*/


/*	
	if (c>='a' && c<= 'z' )
	{
		n = m-96;
		printf("The Number in Alphabet is %d \n", n);

	}
	else if ( c >= 'A' && c <= 'Z')
	{
		n= m-64;
		printf("The Number in Alphabets is %d\n", n);
	}
	*/
	
}
