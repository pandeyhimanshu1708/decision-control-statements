// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,profit,loss,profit_percentage,loss_percentage;

    printf("Enter the cost price and selling price:\n");
    scanf("%f%f",&cp,&sp);
    if(sp==cp)
        printf("no profit and loss");
    else if(sp>cp){
        profit=sp+cp;
        profit_percentage=(profit*100)/cp;
        printf("profit of the product is %f %%",profit);
    }
    else if(sp<cp)
        loss=cp-sp;
        loss_percentage=(loss*100)/sp;
        printf("Loss of the product is %f %%",loss);

return 0;

}