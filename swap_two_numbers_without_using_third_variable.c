#include<stdio.h>
int main()
{
	int a,b;

	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("After Swap\na:%d b:%d",a,b);
	return 0;
}
