//Assignment 16: Write a program in C  to check whether Roll 100 is present or not using if only.
#include<stdio.h>
int main()
{
    int roll;
    printf("Enter roll: ");
    scanf("%d",&roll);
    if(roll==100) 
    printf("Roll 100 is present.");
    return 0;
}