// Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the name of the character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("lowercase");
    else if(ch>'A' && ch<='Z')
        printf("uppercase");
    else if(ch>='0' && ch<='9')
        printf("digit number");
    else
        printf("special character");
    return 0;
}