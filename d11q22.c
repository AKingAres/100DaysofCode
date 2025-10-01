//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, pr, l, p;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if (sp>cp) {
        pr=sp-cp;
        p=(pr/cp)*100;
        printf("\nProfit %.2f%%", p);
    }
    else if (sp<cp) {
        l=cp-sp;
        p=(l/cp)*100;
        printf("\nLoss %.2f%%", p);
    }
    else {
        printf("\nNo Profit, No Loss.\n");
    }
}