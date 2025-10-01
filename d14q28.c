//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i;
    int product=1;
    int first=1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i=2; i<=n; i+=2) {
        product*=i;
    }
    printf("%d (", product);
    first=1;
    for (i=2; i<=n; i+=2) {
        if (!first) {
            printf(" * ");
        }
        printf("%d", i);
        first = 0;
    }
    printf(")\n");
}