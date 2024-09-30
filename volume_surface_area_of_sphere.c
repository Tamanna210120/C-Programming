#include<stdio.h>
int main()
{
  float r,surface,volume;

  printf("Enter radius: ");
  scanf("%f",&r);

  surface =  4 * 3.1416 * r * r;
  volume = (4.0 / 3) * 3.1416 * r * r * r;

  printf("Volume = %0.2f\n", volume);
  printf("Surface Area = %0.2f",surface);

  return 0;
}
