#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array of integers

    // Access and print each element of the array
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
