#include<stdio.h>
int main()
{
	int a,d,n,sum=0;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter total numbers : ");
	scanf("%d",&n);
	printf("Enter the common difference: ");
	scanf("%d",&d);
	sum=(n*(2*a+(n-1)*d))/2;
	printf("Sum of the series A.P.: %d",sum);

	return 0;
}
