#include<stdio.h>
int main()
{
	int n;
	float i,sum=0,t;
	printf("Enter the value of n :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
    {
		t=1/i;
		sum=sum+t;
	}
	printf("The sum of given H.P. is : %0.2f",sum);
	return 0;
}
