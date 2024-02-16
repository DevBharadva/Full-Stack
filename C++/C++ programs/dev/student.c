#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main() {
    struct Student student;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i];
    }

    // Calculate percentage
    student.percentage = (student.total / (5 * 100)) * 100;

    // Determine grade
    if (student.percentage >= 90) {
        student.grade = 'A';
    } else if (student.percentage >= 80) {
        student.grade = 'B';
    } else if (student.percentage >= 70) {
        student.grade = 'C';
    } else if (student.percentage >= 60) {
        student.grade = 'D';
    } else {
        student.grade = 'F';
    }

    
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Total Marks: %.2f\n", student.total);
    printf("Percentage: %.2f%%\n", student.percentage);
    printf("Grade: %c\n", student.grade);

    return 0;
}
