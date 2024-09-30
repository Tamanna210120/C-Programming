#include <stdio.h>
int main()
{
  int a[50],i,pos,n;

  printf("Input the size of array : ");
  scanf("%d", &n);
  for(i=0;i<n;i++)
    {
        printf("element %d : ",i);
        scanf("%d",&a[i]);
    }

  printf("Input the position of delete: ");
  scanf("%d",&pos);
  i=0;
  while(i!=pos-1)
      i++;
  while(i<n)
  {
      a[i]=a[i+1];
      i++;
  }
  n--;
   printf("The new list is : ");
  for(i=0;i<n;i++)
        {
		   printf("  %d",a[i]);
		}
  return 0;
}
