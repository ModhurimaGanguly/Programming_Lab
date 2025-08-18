//Assignment 9: Write a program in C to swap two numbers using third variable.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a: %d\n",a);
	printf("b: %d",b);
	return 0;
}
