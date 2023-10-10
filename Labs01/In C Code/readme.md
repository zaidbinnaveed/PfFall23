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
In this program, the scanf function is used to take input from the user for the number of hours traveled (hours) and the distance traveled (distance). The average speed is calculated by dividing the distance by the number of hours. Finally, the program prints the calculated average speed on the screen.





