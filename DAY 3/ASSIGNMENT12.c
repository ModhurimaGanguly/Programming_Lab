//Assignment 12: Write a program in C to find compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,p,r,n,t;
	printf("Enter principal amount: ");
	scanf("%f",&p);
	printf("Enter rate: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);
	printf("Enter no. of times tinterest is compounded per year: ");
	scanf("%f",&n);
	b=pow((1+(r/n)),(n*t));
	a=p*b;
	printf("Compound Interest: %f",a);
	return 0;
}