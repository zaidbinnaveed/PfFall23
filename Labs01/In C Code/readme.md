Programmer: Zaid Bin Naveed
ID: 23K-0028
Date: 10 Octobr, 2023

Q1:-
#include <stdio.h>

int main() {
    // Declare variables
    float hours, distance, averageSpeed;

    // Take input for the number of hours traveled
    printf("Enter the number of hours traveled: ");
    scanf("%f", &hours);

    // Take input for the distance traveled
    printf("Enter the distance traveled in miles: ");
    scanf("%f", &distance);

    // Calculate average speed
    averageSpeed = distance / hours;

    // Display the average speed
    printf("Average speed: %.2f miles per hour\n", averageSpeed);

    return 0;
}

Q2:-
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Loop to print '*' in each row
        for (int j = 0; j <= i; j++) {
            printf("* "); // Print '*' and a space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

Q3:-
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, temp;

    // Take input for num1
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Take input for num2
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Swap the values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped values
    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

Q4:-
#include <stdio.h>

int main() {
    // Declare variables
    float taxRate, salary, taxAmount, netIncome;

    // Take input for tax rate
    printf("Enter the tax rate (in percentage): ");
    scanf("%f", &taxRate);

    // Take input for salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate tax amount
    taxAmount = (taxRate / 100) * salary;

    // Calculate net income after tax deduction
    netIncome = salary - taxAmount;

    // Display tax amount and net income
    printf("Tax amount to be paid: %.2f\n", taxAmount);
    printf("Net income after tax deduction: %.2f\n", netIncome);

    return 0;
}

Q5:-
#include <stdio.h>

int main() {
    // Declare variables
    float radius, height, volume;

    // Take input for radius and height
    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);
    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    // Calculate the volume of the cone
    volume = (1.0 / 3) * 3.14159265358979323846 * radius * radius * height;

    // Display the volume up to 3 decimal places
    printf("Volume of the cone: %.3f\n", volume);

    return 0;
}

Q6:-
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float a, b, c, discriminant, root1, root2;

    // Take input for coefficients a, b, and c
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    // Check if roots are real or complex
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else {
        // Complex roots
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex:\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}


