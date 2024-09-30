#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10)
    {
        r=temp%10;
        sum=sum*10+r;
    }
    if(sum==temp)
    {
        printf("%d is a Pilandrome Number",temp);
    }
    else
    {
        printf("%d is not a Pilandrome Number",temp);
    }
    return 0;
}
