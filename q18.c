// Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,length;
    printf("Enter the three sides of the traingle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>>b)
        printf("this is valid traingle");
    else
        printf("not valid traingle");
    return 0;
}