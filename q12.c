//  Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
#include<stdio.h>
#include<conio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("enter the marks of m1:\n");
    scanf("%d",&m1);
    printf("enter the marks of m2:\n");
    scanf("%d",&m2);
    printf("enter the marks of m3:\n");
    scanf("%d",&m3);
    printf("enter the marks of m4:\n");
    scanf("%d",&m4);
    printf("enter the marks of m5:\n");
    scanf("%d",&m5);
    if(m1>=33)
        printf("pass");
    else if(m2>=33)
        printf("pass");
    else if(m3>=33)
        printf("pass");
    else if(m4>=33)
        printf("pass");
    else if(m5>=33)
        printf("pass");
    else
        printf("Congrats!! YOU ARE FAIL!!");
    return 0;



}