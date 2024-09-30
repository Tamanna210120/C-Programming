#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum+r*r*r;
    }
    if(sum==temp)
    {
        printf("%d is an Armstrong Number",temp);
    }
    else
    {
        printf("%d is not an Armstrong Number",temp);
    }
    return 0;
}
