#include<stdio.h>
int main()
{
    int num,r,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum+r;
    }
    printf("The Sum of the Digits : %d",sum);

    return 0;
}
