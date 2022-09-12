#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Please enter the three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d",&a);
    }
    else
        if(b>a&&b>c){
            printf("%d",b);
        }
        else{
            if(c>a&&c>b){
                printf("%d",c);
            }
        }
return 0;
    
}

