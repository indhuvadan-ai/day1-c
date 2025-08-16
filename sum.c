#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c=0;
    printf("enter a value\n");
    scanf("%d",&a);
    
    printf("enter b value\n ");
   
    scanf("%d",&b);
    c=a+b;
    printf("the sum of %d and %d is %d",a,b,c);
}