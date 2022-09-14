#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float perc;
};
int main()
{
	struct student std;
	struct student *ptr;
    ptr=&std;
    printf("enter the details of the student :\n\n");
    printf("enter the name of the student:");
    scanf("%s",ptr->name);
    printf("\n enter the roll number of the student:");
    scanf("%d",&ptr->roll);
    printf("\n eenter the percentage of the student:");
    scanf("%d",&ptr->perc);
    printf("\n entered details of the student are:");
    printf("\n name:%s\n\nrollno:%d\n\npercentage:%.02f\n\n",ptr->name,ptr->roll,ptr->perc);
    return 0;
}
