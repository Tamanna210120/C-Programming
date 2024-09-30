#include<stdio.h>
int main()
{
    int a[100],n,i,large,s_large;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    large = s_large = a[0];

    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            s_large = large;
            large = a[i];
        }
        else if(s_large<a[i] && a[i]!=large)
        {
            s_large = a[i];
        }
    }
    printf("The Second Largest Element : %d", s_large);
    return 0;
}
