#include <stdio.h>
#include <string.h>

// Structure to hold car details
struct Car {
    char name[30];
    int available; // 1 means available, 0 means booked
};

// Function prototypes
void displayCars(struct Car cars[], int count);
void bookCar(struct Car cars[], int count);

int main() {
    // Array of cars
    struct Car cars[5] = {
        {"Sedan", 1},
        {"SUV", 1},
        {"Hatchback", 1},
        {"Convertible", 1},
        {"Pickup Truck", 1}
    };

    int choice;

    while (1) {
        printf("\nCar Booking System\n");
        printf("1. View Available Cars\n");
        printf("2. Book a Car\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayCars(cars, 5);
                break;
            case 2:
                bookCar(cars, 5);
                break;
            case 3:
                printf("Thank you for using the Car Booking System. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// Function to display available cars
void displayCars(struct Car cars[], int count) {
    printf("\nAvailable Cars:\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (cars[i].available) {
            printf("%d. %s\n", i + 1, cars[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No cars are available for booking.\n");
    }
}

// Function to book a car
void bookCar(struct Car cars[], int count) {
    int carNumber;
    displayCars(cars, count);
    printf("\nEnter the number of the car you want to book: ");
    scanf("%d", &carNumber);

    if (carNumber < 1 || carNumber > count) {
        printf("Invalid car number. Please try again.\n");
    } else if (!cars[carNumber - 1].available) {
        printf("Sorry, this car is already booked.\n");
    } else {
        cars[carNumber - 1].available = 0;
        printf("You have successfully booked the %s.\n", cars[carNumber - 1].name);
    }
}
