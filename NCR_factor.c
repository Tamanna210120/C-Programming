#include<stdio.h>
int main()
{
  int n,r,ncr;
  printf("Enter two numbers :");
  scanf("%d %d",&n,&r);
  ncr=fact(n)/(fact(r)*fact(n-r));
  printf("NCR factor of %d and %d is %d",n,r,ncr);
  return 0;
}
 int fact(int n)
 {
  int i;
  for(i=1;n!=0;n--)
   {
      i=i*n;
   }
  return i;
 }
