//Assignment 24: Write a program in C to find the size of integer, float, double and char.
#include<stdio.h>
int main()
{
	int i,f,d,c;
	i=sizeof(int);
	f=sizeof(float);
	d=sizeof(double);
	c=sizeof(char);
	printf("Size of int: %d bytes\n",i);
	printf("Size of float: %d bytes\n",f);
	printf("Size of double: %d bytes\n",d);
	printf("Size of char: %d bytes\n",c);
	return 0;
}