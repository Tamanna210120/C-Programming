#include<stdio.h>
int main()
 {
	int n,i,sum;
	sum=0;
	printf("Enter the Max value : ");
	scanf("%d",&n);

	sum = (n * (n + 1)) / 2;

	printf("Sum of the series: %d",sum);

	return 0;
}
