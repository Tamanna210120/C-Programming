#include<stdio.h>
int main()
{
    int a,b,gcd,i,small;

    printf("Enter two numbers :\n");
    scanf("%d %d",&a,&b);

    small = (a < b)? a : b;

    for(i=1;i<=small;i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("HCF of %d and %d is %d\n",a,b,gcd);
    return 0;
}
