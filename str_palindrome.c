#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters from the left
        while (!isalnum(str[left]) && left < right) {
            left++;
        }

        // Ignore non-alphanumeric characters from the right
        while (!isalnum(str[right]) && left < right) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1; // Palindrome
}

int main() {
    char inputString[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character from fgets

    // Check if the entered string is a palindrome
    if (isPalindrome(inputString)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
