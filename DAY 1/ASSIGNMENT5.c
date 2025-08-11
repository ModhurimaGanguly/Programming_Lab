//Assignment 5: Write a program to print ASCII value of a character taken from user.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	printf("ASCII of %c is %d.",ch,ch);
	return 0;
}