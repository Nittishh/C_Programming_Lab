#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    char operator;
    float num1, num2, result;

    // Input from the user
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Switch case for operation
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit with an error code
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;
}

// Function to perform addition
float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return 0 in case of division by zero
    }
}
