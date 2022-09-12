// Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the given year"); 
    scanf("%d",&year);
    // leap year when the given year is divisible by 400
    if(year%400==0)
        printf("Given yaer is a leap year");
    // not a leap year when the given year is divisible by 100
    else if(year%100==0)
        printf("The given year is  not a leap year");
    //also when the given year is divisible by 4 but not divisible by 100 then it's also a leap year
    else if(year%4==0)
        printf("The given year is a leap year");
    else
        printf("The given year is not a leap year");
    return 0;
    
}