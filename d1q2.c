//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("\nSum = %.2f", a + b);
    printf("\nDifference = %.2f", a - b);
    printf("\nProduct = %.2f", a * b);
    if (b != 0) {
        printf("\nQuotient = %.2f\n", a / b);
    } else {
        printf("\nQuotient = Undefined (division by zero not allowed)\n");
    }

}