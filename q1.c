// Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the given number:");
    scanf("%d",&a);
    if(a>=1)
    {
        printf("this is a positive number");
    }
    if(a==0)
    {
        printf("Number is non positive");
    }
    return 0;
}