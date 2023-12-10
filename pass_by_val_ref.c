#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers using pass by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    // Using pass by value
    printf("Before swap (pass by value): num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swap (pass by value): num1 = %d, num2 = %d\n\n", num1, num2);

    // Using pass by reference
    printf("Before swap (pass by reference): num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swap (pass by reference): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
