//Assignment 19: A coin has been tossed once. Write a program in C to check whether it is Head or Tail.
#include<stdio.h>
int main()
{
	char c;
	printf("Enter H for Head and T for Tail: ");
	scanf("%c",&c);
	if(c=='H'||c=='h')
	printf("It is Head");
	else if(c=='T'||c=='t')
	printf("It is Tail");
	return 0;
}