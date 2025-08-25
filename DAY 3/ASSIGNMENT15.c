//Assignment 15: Write a program in C to find out the real root of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x;
	printf("Enter coefficient of x^2: ");
	scanf("%f",&a);
	printf("Enter coefficient of x: ");
	scanf("%f",&b);
	printf("Enter constant term: ");
	scanf("%f",&c);
	d=sqrt((b*b)-(4*a*c));
	x=(d-b)/(2*a);
	printf("Real Root: %f",x);
	return 0;
}