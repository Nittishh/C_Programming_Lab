#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    // Open a file for writing
    file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Get input from the user
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data), stdin);

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    // Read and display content from the file
    printf("\nContents of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Close the file
    fclose(file);

    return 0;
}
