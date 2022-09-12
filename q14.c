//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter the given number:");
    scanf("%d",&a);

    if(a%3==0 && a%2==0)
        printf("Given number is divisible by both three and two");
    else
        printf("Given number is not divisible by three and two");
    return 0;

}