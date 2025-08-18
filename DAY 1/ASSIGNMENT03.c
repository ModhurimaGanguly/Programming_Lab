//Assignment 3: Write a program in C to subtract two float numbers given by user.
#include<stdio.h>
int main()
{
	float f1,f2;
	printf("Enter two numbers: \n");
	scanf("%f",&f1);
	scanf("%f",&f2);
	printf("Difference: %f",f1-f2);
	return 0;
}
