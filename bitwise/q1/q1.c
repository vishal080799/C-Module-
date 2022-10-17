//
//

#include<stdio.h>
int setbit(int n);
int setbit(int n)
{
  if(n==0)
  {
    return 0;
  }
  else
 {
   return ((n&1)+setbit(n>>1));
 }
}
int main()
{
   int n;
   printf("enter the number:\n");
   scanf("%d",&n);
   printf("nuber of 1s in %d is bit:%d\n",n,setbit(n));
   return 0;
}
