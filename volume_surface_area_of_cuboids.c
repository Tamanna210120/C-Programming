#include<stdio.h>
int main()
{
    float l,w,h,surface,volume;

    printf("Enter length,width & height: ");
    scanf("%f%f%f",&l,&w,&h);

    volume = l* w * h;
    surface = 2 *(l * w + l * h + h * w);

    printf("Volume = %0.2f\n",volume);
    printf("Surface Area = %0.2f",surface);

    return 0;
}
