#include <stdio.h>
#include <string>

using namespace std;

// Define a structure to store employee information
struct Employee {
    string name;
    double salary;
    int hoursWorked;
};

// Function to calculate the salary increase based on hours worked
double calculateSalaryIncrease(int hoursWorked) {
    if (hoursWorked >= 8 && hoursWorked < 10) {
        return 50.0;
    } else if (hoursWorked >= 10 && hoursWorked < 12) {
        return 100.0;
    } else if (hoursWorked >= 12) {
        return 150.0;
    } else {
        return 0.0;
    }
}

int main() {
    // Declare an array of 10 employees
    Employee employees[10];

    // Input information for each employee
    for (int i = 0; i < 10; ++i) {
        cout << "Enter the name of employee " << i + 1 << ": ";
        cin >> employees[i].name;
        cout << "Enter the salary of employee " << i + 1 << ": ";
        cin >> employees[i].salary;
        cout << "Enter the hours of work per day for employee " << i + 1 << ": ";
        cin >> employees[i].hoursWorked;
    }

    // Calculate and print the final salary for each employee
    cout << "\nFinal Salaries:\n";
    for (int i = 0; i < 10; ++i) {
        double increase = calculateSalaryIncrease(employees[i].hoursWorked);
        employees[i].salary += increase;
        cout << "Employee " << employees[i].name << ": $" << employees[i].salary << endl;
    }

    return 0;
}
