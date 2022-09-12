#include<stdio.h>
int main()
{
	int i,m,n;
	printf("enter the numbers n and m");
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=1;i<=m;i++)
  {
    printf("%dX%d = %d\n",i,n,i*n);
  }
	return 0;
}
