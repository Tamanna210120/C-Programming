#include<stdio.h>
int main()
{
    float length,width,Area;
    printf("Enter Length and Width : ");
    scanf("%f %f",&length,&width);

    Area = length * width;

    printf("Area = %0.2f",Area);
    return 0;
}

