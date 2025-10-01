/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F. */

#include <stdio.h>
int main() {
    int percentage;
    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);
    if (percentage<0||percentage>100) {
        printf("\nInvalid input! Percentage must be between 0 and 100.\n");
    } 
    else if (percentage>=90) {
        printf("\nGrade A\n");
    } 
    else if (percentage>=80) {
        printf("\nGrade B\n");
    } 
    else if (percentage>=70) {
        printf("\nGrade C\n");
    } 
    else if (percentage>=60) {
        printf("\nGrade D\n");
    } 
    else {
        printf("\nGrade F\n");
    }
}