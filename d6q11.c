//Write a program to input an integer and check whether it is even or odd using if–else

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}