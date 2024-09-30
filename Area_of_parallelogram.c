#include <stdio.h>
int main()
{
    float base,altitude,area;
    printf("Enter base and altitude: ");
    scanf("%f%f",&base,&altitude);

    area = base * altitude;

    printf("Area=%0.2f\n", area);
    return 0;
}
