#include <stdio.h>
#include <stdlib.h>

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

// Function to write student data to a file
void writeToFile(const struct Student *students, int numStudents, const char *filename) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        exit(1);
    }

    // Write data for each student to the file
    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s %d ", students[i].name, students[i].rollNumber);
        for (int j = 0; j < 5; j++) {
            fprintf(file, "%.2f ", students[i].marks[j]);
        }
        fprintf(file, "\n");
    }

    // Close the file
    fclose(file);
}

// Function to read student data from a file and display it
void readAndDisplayFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        exit(1);
    }

    struct Student student;

    // Read and display content from the file
    printf("\nStudent Information from File:\n");
    while (fscanf(file, "%s %d %f %f %f %f %f", student.name, &student.rollNumber,
                  &student.marks[0], &student.marks[1], &student.marks[2], &student.marks[3], &student.marks[4]) == 7) {
        printf("Name: %s\n", student.name);
        printf("Roll Number: %d\n", student.rollNumber);
        printf("Marks: %.2f %.2f %.2f %.2f %.2f\n", student.marks[0], student.marks[1], student.marks[2], student.marks[3], student.marks[4]);
        printf("\n");
    }

    // Close the file
    fclose(file);
}

int main() {
    int numStudents;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Allocate memory for an array of structures to store student information
    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    // Input information for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nEntering details for student %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    // Write student data to a file
    writeToFile(students, numStudents, "student_data.txt");

    // Read and display student data from the file
    readAndDisplayFromFile("student_data.txt");

    // Free allocated memory
    free(students);

    return 0;
}
