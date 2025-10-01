//Write a program to reverse a given number.

#include <stdio.h>
int main() {
    int n, rev, r;
    printf("Enter number to be reversed: ");
    scanf("%d", &n);
    while (n!=0) ; {
        rev=n%10;
        r=r*10+rev;
        n/10;
    }
    printf("The reversed number is: %d", r);
}