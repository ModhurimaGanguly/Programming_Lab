//Program 1: Write a program in C to convert given days into years, months and days.
#include<stdio.h>
int main()
{
	int n,y=0,rd=0,m=0,d=0;
	printf("Enter no. of days: ");
	scanf("%d",&n);
	y=n/365;
	rd=n-(y*365);
	m=rd/30;
	d=rd-(m*30);
	printf("No. of days: %d\n",n);
	printf("Years: %d, Months: %d, Days: %d",y,m,d);
	return 0;
}