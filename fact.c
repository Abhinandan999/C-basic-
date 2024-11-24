#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: Factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int number;
    
    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check for invalid input
    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate and print factorial
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}
