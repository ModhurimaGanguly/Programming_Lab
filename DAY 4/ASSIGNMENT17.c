//Assignment 17: Write a program in C to check whether an integer is even or odd.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter: ");
	scanf("%d",&n);
	if(n%2==0)
	printf("%d is even.",n);
	else
	printf("%d is odd.",n);
	return 0;
}