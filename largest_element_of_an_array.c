#include <stdio.h>
int main()
{
  int a[100], n, i, loc = 0;

  printf("Enter number of elements : ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 1; i < n; i++)
  {
    if (a[i] > a[loc])
      loc = i;
  }
  printf("Largest element is : %d", a[loc]);
  return 0;
}
