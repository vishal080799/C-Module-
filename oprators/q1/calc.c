#include<stdio.h>
int main()
{
	long int a,b,res;
	char op;
	
	printf("Enter First Oprend : \t");
	scanf("%ld",&a);

	printf("Enter oprator the opration you want: \t");
        scanf(" %c",&op);

	printf("Enter Secend Oprend : \t");
        scanf("%ld",&b);

	switch (op)
	{
		case '+':
			res = a + b;
			printf("The sum of these two numbers are:%ld\t", res);
			break ;

			case '-':
                        res = a - b;
                        printf("The difference of these two numbers are:%ld\t", res);
                        break ;

			case '*':
                        res = a * b;
                        printf("The product of these two numbers are:%ld\t", res);
                        break ;

			case '/':
                        float res = a / b;
                        printf("The divident of  these two numbers are:%f\t", res);
                        break ;

			case '%':
                        res = a % b;
                        printf("The remainders of division of these two numbers are:%ld\t", res);
                        break ;

			default :
			printf(" Please Enter Correct Oprator.!!!\n");
			break;
	}
	return 0.0;
}

