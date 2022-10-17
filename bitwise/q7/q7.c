//

#include<stdio.h>
int main()
{
  int num,n,newnum;
  printf("enter the number:");
  scanf("%d",&num);
  printf("enter the postion:");
  scanf("%d",&n);
//  num=num>>(n-1);
  if(num&(1<<n))
   {
     printf("bit is set\n");
   }
  else
  {
   printf("bit not set\n");
  }
 return 0;
}
