//

#include<stdio.h>
struct s1 {
	int a:6;
	int b:4;
	int c:6;
};

void main()
{
	struct s1 v;
	v.a =3;
	v.b =5;
	v.c =7;
	printf("%d\n",v.a);
	printf("%d\n",v.b);
	printf("%d\n",v.c);
	printf("The maximum integer a:6 and c:6 can take is 63 intigers range is (-32 to 31) and b:4 is 15 range is (-8 to 7)\n");
	int a:8;
	int b:6;
	int c:5;

}
