//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, m, rev, r=0;
    printf("Enter number to check: ");
    scanf("%d", &n);
    n=m;
    while (n!=0); {
        rev=n%10;
        r=r*10+rev;
        n/10;
    }
    if (r==m) {
        printf("The number is palindrome");
    }
    else {
        printf("The number is not palindrome");
    }
}