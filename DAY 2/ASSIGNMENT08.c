//Assignment 8: Write a program in C which will convert Fahrenheit to Celsius and vice versa.
#include<stdio.h>
int main()
{
	float f1,f2,c1,c2;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f",&f1);
	printf("Enter temperature in Celsius: ");
	scanf("%f",&c1);
	c2=(f1-32)*5/9;
	f2=(c1*9/5)+32;
	printf("%f Fahrenheit is %f Celsius\n",f1,c2);
	printf("%f Celsius is %f Fahrenheit",c1,f2);
	return 0;
}
