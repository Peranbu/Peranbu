#include<stdio.h>
void swapnumbers(int *x,int *y,int *z);
int main()
{
	int e1,e2,e3;
	printf("enter the value of first element");
	scanf("%d",&e1);
	printf("enter the value of second element");
	scanf("%d",&e2);
	printf("enter the value of third element");
	scanf("%d",&e3);
	printf("\n the value before swapping are \n");
	printf("element 1=%d\n element 2=%d\n element 3=%d\n",e1,e2,e3);
	swapnumbers(&e1,&e2,&e3);
	printf("\n the value after swapping are \n");
	printf("element 1=%d\n element 2=%d\n element 3=%d\n\n",e1,e2,e3);
	return 0;
}
void swapnumbers(int *x,int *y,int *z)
{
	int tmp;
	tmp=*y;
	*y=*x;
	*x=*z;
	*z=tmp;
}
