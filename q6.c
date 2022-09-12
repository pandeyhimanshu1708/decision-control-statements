//Check whether the given number is two digit numbe or not
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Please enter the two digit number");
    scanf("%d",&a);
    if(a>9&&a<100)
        printf("Given number is two digit number");
    else
        printf("Given number is not a two digit number");
    return 0;
}