#include<stdio.h>
int main()
{
    int n,i;
    float c,big;

    printf("Number of elements: ");
    scanf("%d", &n);
    printf("\nElement 1: ");
    scanf("%f",&big);
    for(i = 2; i <= n; i++)
    {
        printf("Element %d  : ",i);
        scanf("%f",&c);

        if(big<c)
            big = c;
    }

    printf("\nThe largest number is  %f ",big);
    return 0;
}
