// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the value of given number:\n");
    scanf("%d",&a);
    if(a%7==0 && a%3==0)
        printf("Given number is divisible by both 7 and 3");
    else    
        printf("Given number is not divisible by both 7 and 3");
    return 0;
}