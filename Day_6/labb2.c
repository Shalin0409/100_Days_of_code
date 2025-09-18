
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter a number\n");
    printf("enter other number\n");
    scanf("%d",& a);
    scanf("%d",& b);
    c=a&&b;
    d=a||b;
    printf("output of &&%d",c);
    printf("output of || %d",d);
}