#include<stdio.h>
void findfact(int,int*);
int main()
{
	int fact;
	int num;
	printf("enter the given number");
	scanf("%d",&num);
	findfact(num,&fact);
	printf("the factorial of the given number =%d\n",num,fact);
	return 0;
}
void findfact(int n,int *f)
{
	int i;
	*f=1;
	for(i=1;i<=n;i++)
	*f=*f*i;
}
