#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter any string : ");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=123)
        {
            str[i]=str[i]-32;
        }
    }
    printf("UpperCase string is :%s",str);
}
