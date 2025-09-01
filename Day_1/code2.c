// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("enter number\n");
    printf("enter other number\n");
    scanf("%d",& a);
    scanf("%d",& b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("sum is:%d",c);
    printf("difference is:%d,d");
    printf("multiplication is: %d",e);
    printf("division is: %f",f);
    return 0;

}