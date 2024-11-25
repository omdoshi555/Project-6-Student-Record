// C Program to Store Information of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create the student structure
struct Student {
    char* name;
    int roll_number;
    int age;
    double total_marks;
};

// Function to sort students by total marks in descending order
void sortStudentsByMarks(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].total_marks < students[j + 1].total_marks) {
                // Swap students[j] and students[j + 1]
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {

    // Create an array of student structure variable with
    // 5 Student's records
    struct Student students[5];
    int n = sizeof(students) / sizeof(struct Student);

    // Get the students data
    students[0].roll_number = 1;
    students[0].name = "John";
    students[0].age = 12;
    students[0].total_marks = 78.50;

    students[1].roll_number = 5;
    students[1].name = "Mike";
    students[1].age = 10;
    students[1].total_marks = 56.84;

    students[2].roll_number = 2;
    students[2].name = "Steve";
    students[2].age = 11;
    students[2].total_marks = 87.94;

    students[3].roll_number = 4;
    students[3].name = "Anna";
    students[3].age = 12;
    students[3].total_marks = 89.78;

    students[4].roll_number = 3;
    students[4].name = "Emmy";
    students[4].age = 13;
    students[4].total_marks = 78.55;

    // Sort the students by total marks
    sortStudentsByMarks(students, n);

    // Print the sorted Students information
    printf("========================================\n");
    printf("         Student Records            \n");
    printf("========================================\n");
    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %.2f\n", students[i].total_marks);
    }
    
    printf("========================================\n");

    return 0;
}