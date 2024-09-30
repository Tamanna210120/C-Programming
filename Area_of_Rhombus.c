#include <stdio.h>
int main()
{
    float a,b,area;
    printf("Enter the diagonals: ");
    scanf("%f%f",&a,&b);

    area =0.5*a*b;

    printf("Area=%0.2f \n", area);
    return 0;
}
