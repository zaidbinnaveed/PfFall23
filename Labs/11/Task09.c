#include <iostream>
#include <string>

using namespace std;

// Define the Register structure
struct Register {
    int courseId;
    string courseName;
};

// Define the Student structure inheriting from Register
struct Student : public Register {
    int studentId;
    string firstName;
    string lastName;
    string cellNo;
    string email;
};

int main() {
    const int numStudents = 5;

    // Declare an array of struct Student for 5 students
    Student students[numStudents];

    // Input information for each student
    cout << "Enter information for 5 students:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Enter Student ID: ";
        cin >> students[i].studentId;
        cout << "Enter First Name: ";
        cin >> students[i].firstName;
        cout << "Enter Last Name: ";
        cin >> students[i].lastName;
        cout << "Enter Cell Number: ";
        cin >> students[i].cellNo;
        cout << "Enter Email: ";
        cin >> students[i].email;

        cout << "Enter Course ID: ";
        cin >> students[i].courseId;
        cout << "Enter Course Name: ";
        cin >> students[i].courseName;

        cout << endl;
    }

    // Print information for each student
    cout << "Student Information:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Student ID: " << students[i].studentId << endl;
        cout << "First Name: " << students[i].firstName << endl;
        cout << "Last Name: " << students[i].lastName << endl;
        cout << "Cell Number: " << students[i].cellNo << endl;
        cout << "Email: " << students[i].email << endl;
        cout << "Course ID: " << students[i].courseId << endl;
        cout << "Course Name: " << students[i].courseName << endl << endl;
    }

    return 0;
}
