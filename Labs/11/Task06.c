#include <stdio.h>

using namespace std;

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to add days to a date
void addDaysToDate(Date& date, int daysToAdd) {
    while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth(date.month, date.year);
        int daysRemainingInMonth = daysInCurrentMonth - date.day + 1;

        if (daysToAdd >= daysRemainingInMonth) {
            // Move to the next month
            date.day = 1;
            date.month++;

            if (date.month > 12) {
                date.month = 1;
                date.year++;
            }

            daysToAdd -= daysRemainingInMonth;
        } else {
            // Add remaining days to the current month
            date.day += daysToAdd;
            daysToAdd = 0;
        }
    }
}

int main() {
    // Get the current date
    // For simplicity, let's assume the current date is January 1, 2023
    Date currentDate = {1, 1, 2023};

    // Add 45 days to the current date
    addDaysToDate(currentDate, 45);

    // Display the final date
    cout << "Final Date: " << currentDate.day << "/" << currentDate.month << "/" << currentDate.year << endl;

    return 0;
}
