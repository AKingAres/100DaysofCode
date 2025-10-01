//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("\n%d is the largest number\n", a);
    }
    else if (b >= a && b >= c) {
        printf("\n%d is the largest number\n", b);
    }
    else {
        printf("\n%d is the largest number\n", c);
    }
}