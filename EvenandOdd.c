#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("enter a number to find even or odd");
    scanf("%d",&a);
    b= a % 2;

    if (b==0){
        printf("even number");}

    else{
        printf("Odd number");}
}