//

#include<stdio.h>

struct Time
{
	int hour;
	int min;
	int sec;
}t;
void main()

{
	printf("Enter the time in HH:MM:SS =>");
	scanf("%d:%d:%d", &t.hour,&t.min,&t.sec);

	printf("Time is %d:%d:%d\n", t.hour,t.min,t.sec);
}
