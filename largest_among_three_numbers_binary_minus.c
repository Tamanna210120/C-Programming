#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a-b>0 && a-c>0)
    {
        printf("Largest number is :%d",a);
    }
    else if(b-c>0)
    {
        printf("Largest number is :%d",b);
    }
    else
    {
        printf("Largest number is :%d",c);
    }
    return 0;
}
