#include<stdio.h>
int main()
{
    int num,r,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum*10+r;
    }

    printf("The Reverse Number is : %d",sum);

    return 0;
}
