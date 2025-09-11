//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    float l, b, a, p;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    a = l*b;
    p = 2*(l+b);
    printf("\nArea of rectangle = %.2f", a);
    printf("\nPerimeter of rectangle = %.2f\n", p);
}