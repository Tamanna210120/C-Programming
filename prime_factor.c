#include<stdio.h>
int main()
{
    int num,i,j,count;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        count = 0;
        if(num%i== 0)
        {
            for(j=1;j<= i;j++)
            {
                if(i%j == 0)
                {
                    count++;
                }
            }
            if(count == 2)
            {
                printf("%d is a Prime Factor \n",i);
            }
        }
    }
    return 0;
}
