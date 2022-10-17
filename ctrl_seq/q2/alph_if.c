#include<stdio.h>

void main()
{
char alph;
printf("Enter an alphabet:\n");
scanf(" %c", &alph);
if(alph == 'A' || alph == 'a')
{
	printf("A for APPLE\n");
}
else if(alph == 'B' || alph == 'b')
{
	printf("B for BAT\n");
}
else if(alph == 'C'|| alph == 'c')
{
	printf("C for CAT\n");
}
else if(alph == 'D'|| alph == 'd')
{
	printf("D for DOG\n");
}
else if(alph == 'F'|| alph == 'f')
{
	 printf("F for FAN\n");
}
else
{
	printf("Charater is not in the range\n");
}
}
