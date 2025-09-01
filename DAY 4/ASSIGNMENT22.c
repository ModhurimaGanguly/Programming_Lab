//Assignment 22: Write a program in C to check maximum among three numbers using ladder if-else.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b&&a>c)
	printf("%d is maximum among three numbers",a);
	else if(b>a&&b>c)
	printf("%d is maximum among three numbers",b);
	else
	printf("%d is maximum among three numbers",c);
	return 0;
}