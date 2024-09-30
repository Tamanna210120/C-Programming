#include<stdio.h>
#include<math.h>
int main()
{
	float a,r,sum=0;
	int n;
	printf("Enter first number : ");
	scanf("%f",&a);
	printf("Enter total numbers : ");
	scanf("%d",&n);
	printf("Enter common ratio : ");
	scanf("%f",&r);

	sum = (a*(1 - pow(r,n+1)))/(1-r);

	printf("\nSum of the G.P.: %0.2f",sum);
	return 0;
}
