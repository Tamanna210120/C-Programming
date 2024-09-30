#include<stdio.h>
int main()
{
    int a,b,sub;

    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);

    sub=a+(~b)+1;

    printf("Subtraction = %d\n",sub);

    return 0;
}
