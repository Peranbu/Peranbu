#include<stdio.h>
int main(){
int i,n;
unsigned long long fact=1;
printf("enter the number");
scanf("%d",n);
{
if(n<0)
printf("error!invalid input");
else{
	for(i=1;i<n;i++)
	fact=fact*1;
}
printf("factorial of %d=%llu",n,fact);
}
return 0;
}
