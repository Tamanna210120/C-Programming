#include <stdio.h>
int main()
{
    int a,b,lcm;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);

    lcm = (a > b) ? a : b;

    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
            break;
        lcm++;
    }
    printf("LCM of %d and %d is: %d", a, b, lcm);
    return 0;
}