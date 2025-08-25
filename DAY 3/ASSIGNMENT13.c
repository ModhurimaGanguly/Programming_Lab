//Assignment 13: Write a program in C to find out area and perimeter of a rectangle.
#include<stdio.h>
int main()
{
	float a,p,l,b;
	printf("Enter length: ");
	scanf("%f",&l);
	printf("Enter breadth: ");
	scanf("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf("Area: %f\n",a);
	printf("Perimeter: %f",p);
	return 0;
}