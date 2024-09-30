#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter the radius : ");
    scanf("%f",&r);

    area = 3.1416 * r * r;

    printf("Area = %0.2f",area);

    return 0;
}
