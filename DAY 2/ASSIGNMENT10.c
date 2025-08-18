//Assignment 10: Write a program in C to swap two numbers without using third variable.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a: %d\n",a);
	printf("b: %d",b);
	return 0;
}