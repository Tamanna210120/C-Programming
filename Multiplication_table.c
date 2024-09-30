#include<stdio.h>
int main()
{
    int num,i,w;

    printf("Enter a Number : ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        w=num*i;
       printf("%d * %d = %d\n",num,i,w);
    }

    return 0;
}
