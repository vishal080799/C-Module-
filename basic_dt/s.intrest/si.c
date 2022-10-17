#include<stdio.h>
void main()
{
	float p,t,r;
	float i;
	printf("Enter The Money on which you want to calculate Simple Intrest:\n");
	scanf("%f", &p);

	printf("Enter rate per year on which you lended money :\n");
        scanf("%f", &r);

	printf("Enter The Time in years for which you want to calculate Simple Intrest:\n");
        scanf("%f", &t);

	i =( p * r * t )/100;

	printf("Your Simple Intrest is : %.2f\n", i);
}




