/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include <stdio.h>
int main() {
    int u;
    int b=0;
    printf("Enter number of units consumed: ");
    scanf("%d", &u);
    if (u<=0) {
        printf("\nInvalid input. Units must be positive.\n");
    }
    else if (u<=100) {
        b=u*5;
    }
    else if (u<=200) {
        b=(100*5)+((u-100)*7);
    }
    else if (u<=300) {
        b=(100*5)+(100*7)+((u-200)*10);
    }
    else {
        b=(100*5)+(100*7)+(100*10)+((u-300)*12);
    }

    printf("\n Bill: ₹%d\n", b);
}
