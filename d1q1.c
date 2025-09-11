//Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    c=a+b;
    printf("The sum is: %d", c);
}