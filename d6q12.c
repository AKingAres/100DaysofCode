//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if–else check
    if (num >= 0) {
        if (num == 0) {
            printf("\nZero\n");
        } else {
            printf("\nPositive\n");
        }
    } 
    else {
        printf("\nNegative\n");
    }
}