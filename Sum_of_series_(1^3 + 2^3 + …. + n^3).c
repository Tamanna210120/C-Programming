#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the max value: ");
    scanf("%d",&n);

    sum=pow(((n*(n+1))/2),2);
    printf("Sum of the series: %d",sum);

    return 0;
}
