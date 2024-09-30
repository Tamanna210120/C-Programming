#include<stdio.h>
int main()
{
    int num,mod,count=0;
    printf("Enter the Number : ");
    scanf("%d",&num);

    while(num>0)
    {
        mod=num%10;
        if(mod!=0)
        {
            count++;
        }
        num=num/10;
    }
    printf("%d",count);
    return 0;
}
