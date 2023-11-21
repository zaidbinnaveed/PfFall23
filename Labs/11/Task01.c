#include <stdio.h>

#define MAX_STUDENTS 450

// Define the structure for student data
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print data of a student by roll number
void printStudentByRollNumber(struct Student students[], int numStudents, int targetRollNumber) {
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("Student Data for Roll Number %d:\n", targetRollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;  // Exit the function after printing data
        }
    }
    printf("No student found with Roll Number %d\n", targetRollNumber);
}

int main() {
    // Create an array of structures to store student data
    struct Student students[MAX_STUDENTS] = {
        {101, "Zaid", "Computer Science", "B.Tech", 2022},
        {102, "Haris", "Electrical Engineering", "B.Tech", 2022},
        {103, "Yesaullah", "Mechanical Engineering", "B.Tech", 2023}
        // Add more students as needed
    };

    // Print names of students who joined in a particular year
    printStudentsByYear(students, 3, 2022);

    // Print data of a student by roll number
    printStudentByRollNumber(students, 3, 102);
    printStudentByRollNumber(students, 3, 104);  // Nonexistent roll number

    return 0;
}
