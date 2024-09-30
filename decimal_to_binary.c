#include<stdio.h>
int main()
{
    int num,rem,bin=0,place=1;

    printf("Enter a number :");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 2;
        bin+= rem * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary equivalent of %d is %d",num,bin);

    return 0;
}
