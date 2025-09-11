//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t, si, ci;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    si=(p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f\n", ci);

}