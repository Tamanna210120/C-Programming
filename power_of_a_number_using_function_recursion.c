#include <stdio.h>
int main()
{
    int base, exp, result;
    printf("Enter base and exponent : ");
    scanf("%d %d", &base, &exp);

    result = Power(base, exp);

    printf("%d^%d = %d", base, exp, result);
    return 0;
}

int Power(int base, int exp)
{
    if(exp == 0)
    {
        return 1;
    }
    return base * Power(base, exp - 1);
}
