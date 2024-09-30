#include<stdio.h>
int main()
{
    int num, result;
    printf("Enter number: ");
    scanf("%d", &num);
    result = reverse(num, 0);
    printf("Reverse number is %d",result);
    return 0;
}
int reverse(int num, int rev)
{
    if(num==0)
        return rev;
    else
        return reverse (num/10, rev*10 + num%10);
}
