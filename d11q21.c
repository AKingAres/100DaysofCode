//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:  printf("\nJanuary, 31 days\n"); break;
        case 2:  printf("\nFebruary, 28/29 days\n"); break;
        case 3:  printf("\nMarch, 31 days\n"); break;
        case 4:  printf("\nApril, 30 days\n"); break;
        case 5:  printf("\nMay, 31 days\n"); break;
        case 6:  printf("\nJune, 30 days\n"); break;
        case 7:  printf("\nJuly, 31 days\n"); break;
        case 8:  printf("\nAugust, 31 days\n"); break;
        case 9:  printf("\nSeptember, 30 days\n"); break;
        case 10: printf("\nOctober, 31 days\n"); break;
        case 11: printf("\nNovember, 30 days\n"); break;
        case 12: printf("\nDecember, 31 days\n"); break;
        default: printf("\nInvalid input! Please enter a number between 1 and 12.\n");
    }
}