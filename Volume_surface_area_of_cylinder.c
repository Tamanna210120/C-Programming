#include <stdio.h>
int main()
{
    float r,h,surface,volume;
    printf("Enter radius and height: ");
    scanf("%f%f",&r,&h);

    volume = 3.1416 * r * r * h;
    surface = 2 * 3.1416* r * (r + h);

    printf("Volume = %0.2f\n",volume);
    printf("Surface Area = %0.2f",surface);

    return 0;
}
