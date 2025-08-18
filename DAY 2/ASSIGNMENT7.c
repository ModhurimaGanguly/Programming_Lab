//Assignment 7: Write a program in C to calculate area of circle.
#include<stdio.h>
int main()
{
	float a,r;
	printf("Enter radius of circle: ");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("Area of circle: %f",a);
	return 0;
}