#include<stdio.h>
int main()
{
    int num,i,count=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a Prime Number",num);
    }
    else
    {
        printf("%d is not a Prime Number",num);
    }
    return 0;
}
