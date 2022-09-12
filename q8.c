// Wyrite a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,real,imaginary,roots,distinct,d,root1,root2,i;  // we know that standatred form of quadractic equation is (pow((ax)2)+bx+c=0 

    printf("Enter the given value:");
    scanf("%d%d%d",&a,&b,&c);

    d=b*b-4*a*c;    

    if(d>0){
        root1=-b+sqrt(d)/2*a;
        root2=-b-sqrt(d)/2*a;
        printf("roots are real and different");
    }
    else if(d==0){
        root1=(-b/2*a);
        printf("roots are equal and different");
        }
    else if(d<0){
        real=-b/2*a;
        imaginary=sqrt(d/2*a);
        // root1=(-b+(sqrt(d)/2*a));
        root2=(-b-(sqrt(d)/2*a));
        // printf("root1 are real and unequal %f+i",root1,real);
        printf("root2 are imaginary and unequal %f+i,%f-i",root2,imaginary);
        }
        
return 0;
}
       
 
