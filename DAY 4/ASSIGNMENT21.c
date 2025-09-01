//Assignment 21: Write a program in C to check whether it is Leap Year or not using ladder if-else.
#include<stdio.h>
int main()
{
	int y;
	printf("Enter year: ");
	scanf("%d",&y);
	if(y%400==0)
	printf("It is a Leap Year");
    else if(y%100==0)
    printf("It is not a Leap Year");
    else if(y%4==0)
    printf("It is a Leap Year");
    else
    printf("It is not a Leap Year");
	return 0;
}