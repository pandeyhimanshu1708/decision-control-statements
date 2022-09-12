// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the name of character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<'z')
        printf("lowercase");
    else if(ch>='A'&&ch<='Z')
        printf("uppercase");
    return 0;
}