//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
   int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter swapping: a = %d, b = %d\n", a, b);
}
