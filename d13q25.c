//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {
char operator;
    int num1, num2;
    float result;
    printf("Enter the numbers and operator: ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            result=num1+num2;
            printf("\n%d+%d=%.2f\n", num1, num2, result);
            break;
        case '-':
            result=num1-num2;
            printf("\n%d-%d=%.2f\n", num1, num2, result);
            break;
        case '*':
            result=num1*num2;
            printf("\n%d*%d=%.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2!=0) {
                result=num1/num2;
                printf("\n%d/%d=%.2f\n", num1, num2, result);
            } else {
                printf("\nDivision by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2!=0) {
                printf("\n%d %% %d=%d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("\nDivision by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nInvalid operator.\n");
    }
}