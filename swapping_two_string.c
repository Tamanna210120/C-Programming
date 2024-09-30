#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100], t[100];

  printf("Enter first string : \n");
  gets(a);

  printf("Enter second string\n");
  gets(b);

  strcpy(t, a);
  strcpy(a, b);
  strcpy(b, t);

  printf("After Swapping\n");
  printf("First string: %s\n", a);
  printf("Second string: %s\n", b);

  return 0;
}
