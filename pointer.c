#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;  // Pointer declaration

    ptr = &num;  // Storing address of 'num' in 'ptr'

    // Output the value of 'num' and its address
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    // Output the value of 'ptr' (address of 'num') and value at the address stored in 'ptr'
    printf("Value of ptr (Address of num): %p\n", ptr);
    printf("Value at the address stored in ptr (Value of num): %d\n", *ptr);

    // Modify the value of 'num' using pointer
    *ptr = 20;
    printf("New value of num after modifying via pointer: %d\n", num);

    return 0;
}
