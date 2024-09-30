#include<stdio.h>
int main()
{
  float l,surface,volume;

  printf("Enter Length of any side: ");
  scanf("%f",&l);

  volume = l * l * l;
  surface =6 * (l * l);

  printf("Volume=%0.2f\n",volume);
  printf("Surface Area=%0.2f", surface);

  return 0;
}
