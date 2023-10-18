#include <stdio.h>

int main() {
    int n, num, max;
    
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of values.\n");
        return 1; 
    }

    printf("Enter %d numbers:\n", n);

    // Read the first number as the initial maximum
    scanf("%d", &max);

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);

        // Compare the current number with the maximum
        if (num > max) {
            max = num; // Update max if the current number is greater
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
