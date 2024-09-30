#include<stdio.h>
int main()
{
    int a, b, gcd;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    gcd = f_gcd(a, b);
    printf("GCD of %d and %d is: %d", a, b, gcd);
    return 0;
}
int f_gcd(int a, int b)
{
    if(a > b)
        f_gcd(a-b, b);

    else if(b > a)
        f_gcd(a, b-a);
    else
       return a;
}
