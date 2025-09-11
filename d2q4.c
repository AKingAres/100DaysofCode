//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float r, a, c;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("\nArea of circle = %.2f", a);
    printf("\nCircumference of circle = %.2f\n", c);
}