#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1, temp;
    while (start < end) {
        // Swap the elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    int n, i;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d",
