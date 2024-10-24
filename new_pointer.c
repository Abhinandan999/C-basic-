#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to print an array using pointer arithmetic
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Pointer arithmetic
    }
    printf("\n");
}

int main() {
    int a = 10, b = 20;

    // Printing values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap values using pointers
    swap(&a, &b);

    // Printing values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    // Array and pointer arithmetic example
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print array using pointer
    printf("Array elements: ");
    printArray(arr, size);

    return 0;
}
