//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main() {
    int n, r,w=0;
    printf("Enter number: ");
    scanf("%d", &n);
    int o=n;
    while(o!=0) {
        r=o%10;
        w+=r*r*r;
        o/=10;
    }
    if(n==w) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }
}