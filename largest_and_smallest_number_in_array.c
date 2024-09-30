#include <stdio.h>
int main()
{
    int a[100], n, i, small, large;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    small = a[0];
    large = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }

        else if (a[i] > large)
        {
            large = a[i];
        }
    }

    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d", small);

    return 0;
}
