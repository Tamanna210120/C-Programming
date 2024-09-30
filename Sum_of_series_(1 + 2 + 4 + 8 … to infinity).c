#include<stdio.h>
int main()
{

    float a=1,r,sum=0;

    printf("Enter the common ratio : ");
    scanf("%f",&r);

    if(1 > r)
         sum = a/(1-r);
    else
         sum = a/(r-1);

    printf("\nSum of the infinite series: %0.2f",sum);

    return 0;
}
