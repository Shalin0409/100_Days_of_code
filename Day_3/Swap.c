//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf ("Enter the number:");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swap: %d %d\n", a, b);
    return 0;
}