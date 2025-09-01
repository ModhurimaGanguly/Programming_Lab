//Assignment 20: Write a program in C to check whether it is whole number or not.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(n>=0)
	printf("It is whole number");
	else
	printf("It is not whole number");
	return 0;
}