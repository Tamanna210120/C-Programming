#include<stdio.h>
int main()
{
    float a,area;
    printf("Enter side:");
    scanf("%f",&a);

    area = (sqrt(3)/4) * a * a;

    printf("Area = %0.2f",area);

    return 0;
}
