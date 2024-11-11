#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define maximum size of stack

int stack[MAX];
int top = -1;

// Function to check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("Pushed %d onto stack\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack underflow! No element to pop\n");
        return -1;  // Return -1 to indicate an error
    } else {
        printf("Popped %d from stack\n", stack[top]);
        return stack[top--];
    }
}

// Function to peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1;  // Return -1 to indicate an error
    } else {
        return stack[top];
    }
}

// Function to display stack elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // This will show stack overflow as max size is 5

    display();

    printf("Top element is %d\n", peek());

    pop();
    pop();

    display();

    return 0;
}
