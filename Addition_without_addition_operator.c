#include<stdio.h >
int main()
{
    int a,b,add;

    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    add=a-(-b);

    printf("Addition = %d",add);

    return 0;
}
