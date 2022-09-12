// Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the given number:");
    scanf("%d",&a);
    if((a>99)&&(a<1000))
        printf("Given number is three digit number");
    else
        printf("Given number is not a three digit number");
    return 0;
}