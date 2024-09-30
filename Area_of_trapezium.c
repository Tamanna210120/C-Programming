#include <stdio.h>
int main()
{
    float a,b,h,area;

    printf("Enter two bases and height: ");
    scanf("%f%f%f",&a,&b,&h);

    area = 0.5*(a+b)*h;

    printf("Area = %.2f",area);
    return 0;
}
