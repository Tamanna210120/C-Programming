#include <stdio.h>
int main()
{
     int n, i=1, j, oct=0;
     printf("Enter a number : ");
     scanf("%d",&n);

     for(j=n;j>0;j=j/8)
       {
        oct=oct+(j % 8)*i;
        i=i*10;
        n=n/8;
       }

     printf("Octal equivalent is : %d",oct);
}
