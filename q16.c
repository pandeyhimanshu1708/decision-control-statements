// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter the given nunebr:");
    scanf("%d",&a);
    if(a>0)
        printf("Given number is positive");
    else if(a==0)
        printf("Given number is zero");
    else
        printf("Given number is negative");
    return 0;
}