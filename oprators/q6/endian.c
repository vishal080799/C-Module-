//
//

#include<stdio.h>
int main()
{
	int num = 0x123456;
	endian((char*)&num,sizeof(num));
	return 0;
}
endian(char*var , int num)
{
	for (int i = 0; i<num ;i++)
	{
		printf(" %.2x", var[i]);
	}
	printf("\n");
}
