//Assignment 14: Write a program in C to find out floor and ceil value of a positive number and a negative number.
#include<stdio.h>
#include<math.h>
int main()
{
	float n1,n2,f1,f2,c1,c2;
	printf("Enter positive number: ");
	scanf("%f",&n1);
	printf("Enter negative number: ");
	scanf("%f",&n2);
	f1=floor(n1);
	c1=ceil(n1);
	f2=floor(n2);
	c2=ceil(n2);
	printf("Floor value: %f, Ceil value: %f of positive number %f\n",f1,c1,n1);
	printf("Floor value: %f, Ceil value: %f of negative number %f",f2,c2,n2);
	return 0;
}