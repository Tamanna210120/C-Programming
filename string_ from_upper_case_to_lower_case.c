#include<stdio.h>
#include<string.h>
int main()
{
   char str[25];
   int i;
   printf("Enter the string: ");
   gets(str);

   for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("Lower Case String is: %s",str);
   return 0;
}
