#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int i,j;

  printf("Enter any string: ");
  gets(str);
  for( i = 0;i < strlen(str); i++)
    {
      if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
      {
        for(j = i; j < strlen(str); j++)
        {
            str[j] = str[j+1];
        }
        i--;
      }
   }
  printf("Rest Of The string is: %s",str);
  return 0;
}
