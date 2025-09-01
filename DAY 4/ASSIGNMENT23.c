//Assignment 23: Write a program in C to check if a letter is vowel or consonant using ladder if-else.
#include<stdio.h>
int main()
{
	char c;
	printf("Enter character: ");
	scanf("%c",&c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("It is a vowel");
	else
	printf("It is a consonant");
	return 0;
}