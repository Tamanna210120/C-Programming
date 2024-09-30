#include <stdio.h>
int main()
{
   int a,b,t;
   printf("Enter num1 :");
   scanf("%d",&a);
   printf("Enter num2 :");
   scanf("%d",&b);
   t = b;
   b = a;
   a = t;
   printf("After Swap\n num1 = %d\n num2 = %d\n",a,b);
   return 0;
}
