//Assignment 11: Write a program in C to find out the last digit of an integer a. using modulus operator and b. without using modulus operator.
#include<stdio.h>
int main()
{
	int n1,n2,d1,d2;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	d1=n1%10;
	d2=n2-(n2/10)*10;
	printf("Last digit of %d is %d.\n",n1,d1);
	printf("Last digit of %d is %d.",n2,d2);
	return 0;
}