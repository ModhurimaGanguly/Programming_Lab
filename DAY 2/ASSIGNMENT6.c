//Asignment 6: Write a program in C to calculate simple interest.
#include<stdio.h>
int main()
{
	float p,r,t,s;
	printf("Enter principal amount: ");
	scanf("%f",&p);
	printf("Enter rate: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);
	s=(p*r*t)/100;
	printf("Simple Interest: %f",s);
	return 0;
}