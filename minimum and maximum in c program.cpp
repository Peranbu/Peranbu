#include<stdio.h>
#include<conio.h>
int main()
{
	int a[1000],i,n,min,max;
	printf("enter the size of the aray");
	scanf("%d",&n);
	printf("enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("minimum of the given array is =%d\n\n",min);
	printf("the maximum of the given array is =%d",max);
	return 0;
}
