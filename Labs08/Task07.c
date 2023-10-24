#include <stdio.h>

// Function to calculate discount based on purchase amount and visit count
float calculateDiscount(float purchaseAmount, int visitCount) {
    if (visitCount > 10 && purchaseAmount >= 50) {
        return 0.15 * purchaseAmount; // 15% discount
    } else if (visitCount > 5 && purchaseAmount >= 30) {
        return 0.10 * purchaseAmount; // 10% discount
    } else {
        return 0; // No discount
    }
}

int main() {
    float purchaseAmount;
    int visitCount;

    // Prompt user for purchase amount and visit count
    printf("Enter your total purchase amount: $");
    scanf("%f", &purchaseAmount);
    printf("Enter the number of times you have visited the shop in the past month: ");
    scanf("%d", &visitCount);

    // Calculate discount using the calculateDiscount function
    float discount = calculateDiscount(purchaseAmount, visitCount);

    // Display discount amount
    if (discount > 0) {
        printf("Congratulations! You have received a discount of $%.2f.\n", discount);
        printf("Total amount to pay: $%.2f\n", purchaseAmount - discount);
    } else {
        printf("Sorry, no discount available for your purchase.\n");
        printf("Total amount to pay: $%.2f\n", purchaseAmount);
    }

    return 0;
}
