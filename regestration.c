

#include <stdio.h>

int main() {
    char name[100];  // Array to store the name (up to 99 characters)

    printf("Welcome to the Name Registration System!\n");
    printf("Please enter your name: ");

    // Reading input from the user
    fgets(name, sizeof(name), stdin);

    // Displaying the registered name
    printf("\nThank you for registering, %s", name);

    return 0;
}
