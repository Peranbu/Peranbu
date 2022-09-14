#include<stdio.h>
struct student{
char name[50];
int roll;
float marks;	
}s;
int main()
{
	int i,n;
	printf("enter information:\n");
	printf("enter the number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter name:",&s);
	scanf("%s",s.name);
	printf("enter roll number:");
	scanf("%d",&s.roll);
	printf("enter marks:");
	scanf("%f",&s.marks);
	}
	for(i=0;i<n;i++)
	{
	printf("displaying information:\n");
	printf("name:");
	printf("%s",s.name);
	printf("roll number:%d\n",s.roll);
	printf("marks:%.1f\n",s.marks);
}
	return 0;
}
