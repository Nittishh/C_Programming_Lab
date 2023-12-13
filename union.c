#include <stdio.h>

// a union for student information
union StudentInfo {
    char name[50];
    int rollNumber;
    float marks;
};

// a structure to hold additional information about the student
struct Student {
    union StudentInfo info;
    char grade;
};

int main() {
    // Declared a structure variable to store student information
    struct Student student;

    printf("Enter details for the student:\n");
    printf("Name: ");
    scanf("%s", student.info.name);
    printf("Name: %s\n", student.info.name);

    printf("Roll Number: ");
    scanf("%d", &student.info.rollNumber);
    printf("Roll Number: %d\n", student.info.rollNumber);

    printf("Marks: ");
    scanf("%f", &student.info.marks);
    printf("Marks: %.2f\n", student.info.marks);

    printf("Grade: ");
    scanf(" %c", &student.grade);
    printf("Grade: %c\n", student.grade);

    return 0;
}
