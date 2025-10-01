//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2, rp, ip;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("\nThis is not a quadratic equation (a cannot be 0).\n");
    } else {
        d=(b*b)-(4*a*c);
        if (d > 0) {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("\nRoots are real and different: %.2f, %.2f", r1, r2);
        }
        else if (d==0) {
            r1=r2=-b/(2*a);
            printf("\nRoots are real and same: %.2f", r1);
        }
        else {
            rp=-b/(2*a);
            ip=sqrt(-d)/(2*a);
            printf("\nRoots are complex.\n");
        }
    }
}