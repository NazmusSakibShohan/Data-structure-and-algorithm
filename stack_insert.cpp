#include <iostream>
using namespace std;

const int M = 10; // Assuming the size of the stack is 10 for this example
int Stack[M];
int top = -1; // Initializing top to -1 to indicate the stack is empty

void push(int item) {
    if (top < M - 1) { // Check for stack overflow
        top++;
        Stack[top] = item; // Add item to the stack
    } else {
        cout << "Overflow" << endl; // Stack is full
    }
}

void printStack() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << Stack[i] << " ";
        }

    }
}

int main() {
    // Example usage:
    push(5); // Pushing an item to the stack
    push(10);
    push(15);

    printStack(); // Output the updated stack

    return 0;
}
