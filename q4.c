// Write a program to check whether a given number is an even number or an odd
// number without using % operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the given number:");
    scanf("%d",&a);
    if((a&1)==0)
        printf("Given number is even");
    else
        printf("Given number is odd");
    return 0;
}