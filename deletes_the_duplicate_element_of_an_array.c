#include <stdio.h>
int main()
{
    int a[100],n,i,j,k;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                for(k=j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array elements after deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
