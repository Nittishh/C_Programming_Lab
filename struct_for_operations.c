#include <stdio.h>

// Define a structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; // Assuming there are 5 subjects
};

// Function to input details for a student
void inputStudent(struct Student *student) {
    printf("Enter details for the student:\n");
    printf("Name: ");
    scanf("%s", student->name);

    printf("Roll Number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student->marks[i]);
    }
}

// Function to calculate total marks for a student
float calculateTotalMarks(const struct Student *student) {
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student->marks[i];
    }
    return total;
}

// Function to display information for a student
void displayStudent(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Total Marks: %.2f\n", calculateTotalMarks(student));
}

int main() {
    // Declare an array of structures to store information for multiple students
    struct Student students[3]; // Assuming there are 3 students

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    // Display information for each student
    for (int i = 0; i < 3; i++) {
        displayStudent(&students[i]);
    }

    return 0;
}
