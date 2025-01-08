#include <iostream>
using namespace std;

const int M = 10; // Define the maximum size of the queue
int queue[M]; // Declare the queue
int front = 0; // Initialize front
int rear = 0; // Initialize rear

void dequeue() {
    if (front == rear) {
        cout << "Queue is empty" << endl; // Check if the queue is empty
        front = rear = 0; // Reset front and rear
    } else {
        int item = queue[front]; // Retrieve the item from the front
        front++; // Move front to the next element
        cout << "Dequeued element: " << item << endl;
    }
}

void printQueue() {
    if (front == rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i < rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example usage:
    // Assuming code to enqueue elements onto the queue is present here
    dequeue(); // Dequeue the front element and update the queue
    printQueue(); // Output the updated queue

    return 0;
}
