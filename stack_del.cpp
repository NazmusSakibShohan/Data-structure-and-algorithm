#include <iostream>
using namespace std;

const int M = 10; // Define the maximum size of the stack
int stack[M]; // Declare the stack
int top = -1; // Initialize top to -1 to indicate the stack is empty

void pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl; // Check if the stack is empty
    } else {
        int x = stack[top]; // Access the top element
        top--; // Update the top to point to the next element
        cout << "Popped element: " << x << endl;
    }
}

void printStack() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example usage:
    // Assuming code to push elements onto the stack is present here
    pop(); // Accessing the top element and updating the stack
    printStack(); // Output the updated stack

    return 0;
}
