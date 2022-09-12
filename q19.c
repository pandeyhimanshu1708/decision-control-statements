//Write a program which takes the month number as an input and display number of
//days in that month
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the month number:\n");
    scanf("%d",&n);
    //for 31 days
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    printf("number of days in these month is 31");
    //for 30 days
    else if(n==4 || n==6 || n==9 || n==11)
        printf("number of days in these month is 30 days");
    else if(n==2)
        printf("number of days in this month is 28 0r 29");
    else{
        printf("Invalid month");
        }
    return 0;


}

