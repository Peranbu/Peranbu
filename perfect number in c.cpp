#include<stdio.h>
#include<conio.h>
int main()
{
	int rem,num,sum=0,i;
	printf("enter the number\n:");
	scanf("{%d",&num);
	for(i=1;i<num;i++)
	{
		rem=num*i;
		if(rem==0);
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	printf("%d is a perfect number");
	else
	printf("%d is not a perfect number");
	getch();
}
