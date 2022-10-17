#include<stdio.h>

void main()
{
char alph;
printf("Enter an alphabet:\n");
scanf(" %c", &alph);
switch(alph)
{
	case 'A':
		printf("A for APPLE\n");
		break;
	case 'a':
                printf("A for APPLE\n");
                break;
	case 'B':
		printf("B for BAT\n");
		break;
	case 'b':
                printf("B for BAT\n");
                break;
	
	case 'C':
		printf("C for CAT\n");
		break;
	case 'c':
                printf("C for CAT\n");
                break;

	case 'D':
		printf("D for DOG\n");
		break;
        case 'd':
                printf("D for DOG\n");
                break;

	case 'F':
		printf("F for FAN\n");
		break;
	case 'f':
                printf("F for FAN\n");
                break;
	default:
		printf("Charater is not in the range\n");
}
}
