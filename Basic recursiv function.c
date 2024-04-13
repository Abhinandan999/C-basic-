/* In this example we are understanding
Printing of Hello world by using of Recursion function*/


#include <stdio.h>

void recursion(int n); // Changed the return type to void

int main() {
    recursion(5);
    return 0;
}

void recursion(int n) { // Changed the return type to void
    if (n == 0) {
        return; // Terminating condition for recursion
    }
    
    printf("Hello World\n");
    
    recursion(n - 1); // Corrected the recursive call
}