// Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the given number:");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("Given number is divisible by 5");
    }
    else
    {
        printf("Given number is not divisible by 5");
    }
    return 0;
}
