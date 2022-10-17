// write a c program using Function tolower to convert Uppercase to Lowercase, and use conditional oprator in it.

#include<stdio.h>
#include<ctype.h>
void main()
{
	char c;
	printf("Enter a Upper case Alphabet :");
	scanf("%c", &c);
	(c >= 'A' && c <= 'Z')?printf("The lower case of the alphabet is : %c\n", tolower(c)):printf("The Charecter you entered is not an Uppercase alphabet\n ");

}    

