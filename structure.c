#include <stdio.h>

// Define a structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming there are 5 subjects
};

// Function to calculate total marks for a student
float calculateTotalMarks(struct Student student) {
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student.marks[i];
    }
    return total;
}

int main() {
    // Declare an array of structures to store information for multiple students
    struct Student students[3]; // Assuming there are 3 students

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        printf("\n");
    }

    // Calculate and display total marks for each student
    printf("Total Marks for Each Student:\n");
    for (int i = 0; i < 3; i++) {
        float totalMarks = calculateTotalMarks(students[i]);
        printf("%s (Roll Number %d): %.2f\n", students[i].name, students[i].rollNumber, totalMarks);
    }

    return 0;
}
