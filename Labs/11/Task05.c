#include <stdio.h>
#include <string>

using namespace std;

// Define the Employee structure
struct Employee {
    int employee_id;
    string name;
    double salary;
};

// Define the Organization structure with nested Employee structure
struct Organization {
    string organisation_name;
    string organisation_number;
    Employee emp;  // Nested Employee structure
};

int main() {
    // Create an instance of the Organization structure
    Organization org;

    // Initialize data
    org.organisation_name = "NU-Fast";
    org.organisation_number = "NUFAST123ABC";
    org.emp.employee_id = 127;
    org.emp.name = "Linus Sebastian";
    org.emp.salary = 400000;

    // Output the required information
    cout << "The size of structure organization: " << sizeof(org) << endl;
    cout << "Organisation Name: " << org.organisation_name << endl;
    cout << "Organisation Number: " << org.organisation_number << endl;
    cout << "Employee id: " << org.emp.employee_id << endl;
    cout << "Employee name: " << org.emp.name << endl;
    cout << "Employee Salary: " << org.emp.salary << endl;

    return 0;
}
