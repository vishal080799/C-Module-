//


#include<stdio.h>

void main ()
{
	float table[2][3] = { {1.1,1.2,1.3,},{2.1,2.2,2.3}};

	printf("The meanining of table is %p\n", table);
	printf("The meanining of (table+1) is %p\n", (table+1));
	printf("The meanining of *(table+1) is %p\n", *(table+1));
	printf("The meanining of (*(table+1)+1) is %p\n",(*(table+1)+1));
	printf("The meanining of (*(table)+1) is %p\n", (*(table)+1));
	printf("The meanining of *(*(table+1)+1) is %f\n",*(*(table+1)+1));
	printf("The meanining of *(*(table)+1) is %f\n", *(*(table)+1));
	printf("The meanining of *(*(table+1)) is %f\n", *(*(table+1)));
	printf("The meanining of *(*(table)+1)+1 is %f\n", *(*(table)+1)+1);
}


