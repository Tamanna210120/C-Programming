#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter base and height : ");
    scanf("%f %f",&base,&height);

    area = 0.5 * base * height;

    printf("Area = %0.2f",area);
    return 0;
}
