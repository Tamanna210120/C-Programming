#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the max value : ");
	scanf("%d",&n);

	sum=(n*(n+1)*(2*n+1))/6;
	printf("Sum of the series : %d",sum);

	return 0;
}
