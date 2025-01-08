#include <iostream>
using namespace std;

const int M = 10; // Define the maximum size of the queue
int queue[M]; // Declare the queue
int front = -1; // Initialize front
int rear = -1; // Initialize rear

void enqueue(int item) {
    if (rear == -1) { // Check if the queue is empty
        front = rear = 0;
        queue[rear] = item; // Insert the first item
    } else if (rear < M - 1) { // Check for queue overflow
        rear++;
        queue[rear] = item; // Add item to the queue
    } else {
        cout << "Overflow message" << endl; // Queue is full
    }
}

void printQueue() {
    if (rear == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example usage:
    enqueue(5); // Adding items to the queue
    enqueue(10);
    enqueue(15);

    printQueue(); // Output the updated queue

    return 0;
}
