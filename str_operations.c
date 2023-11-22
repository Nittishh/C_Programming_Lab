#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize strings
    char str1[50];
    char str2[50];
    char combinedStr[100];

    // Take user input for the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character from fgets

    // Take user input for the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character from fgets

    // String length
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // String copy
    strcpy(combinedStr, str1);
    printf("Combined string after strcpy: %s\n", combinedStr);

    // String concatenation
    strcat(combinedStr, str2);
    printf("Combined string after strcat: %s\n", combinedStr);

    // String comparison
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    // Substring search
    char substring[50];
    printf("Enter the substring to search: ");
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0'; // Remove the newline character from fgets

    char *subStrPtr = strstr(combinedStr, substring);

    if (subStrPtr != NULL) {
        printf("'%s' found in '%s' at position %ld\n", substring, combinedStr, subStrPtr - combinedStr);
    } else {
        printf("'%s' not found in '%s'\n", substring, combinedStr);
    }

    // Character search
    char searchChar;
    printf("Enter the character to search: ");
    scanf(" %c", &searchChar); // Note the space before %c to consume the newline character from previous input

    char *charPtr = strchr(combinedStr, searchChar);

    if (charPtr != NULL) {
        printf("'%c' found in '%s' at position %ld\n", searchChar, combinedStr, charPtr - combinedStr);
    } else {
        printf("'%c' not found in '%s'\n", searchChar, combinedStr);
    }

    return 0;
}
