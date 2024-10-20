#include <stdio.h>
#include <stdlib.h>
//Write a program with the functions add(), subtract() and multiply(),
//and test their usage from main().

// Function prototypes
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);

int main(void) {
   printf("Enter your 2 numbers:\n");
    int num1, num2;
    int result = 0;

    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);
    printf("Result of addition: %d\n", result);
    result = subtract(num1, num2);
    printf("Result subtraction: %d\n", result);
    result= multiply(num1, num2);
    printf("Result of multiplication: %d\n", result);
    
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}
int subtract(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
