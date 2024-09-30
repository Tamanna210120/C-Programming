#include<stdio.h>
int main()
{
    int a[50], pos, i, n, value;

    printf("Enter number of elements :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the location of new element: ");
    scanf("%d", &pos);

    printf("Enter the value\n");
    scanf("%d", &value);

    for (i = n - 1; i >= pos - 1; i--)
        a[i+1] = a[i];

    a[pos-1] = value;

    printf("The new list is: ");

    for (i = 0; i <= n; i++)
        printf("%d\t", a[i]);

    return 0;
}
