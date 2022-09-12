// Write a program to check whether a given number is an even number or an odd
// number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the given number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Given number is even number");
    else
        printf("Given number is odd number");
    return 0;
}