#include <bits/stdc++.h>
using namespace std;

const int M = 10;
int Stack[M];
int top = -1;

void push(int item) {
    if (top < M - 1) {
        top=top+1;
        Stack[top] = item;
    } else {
        cout << "Overflow" << endl;
    }
}

void pop() {
    if (top == -1) {
        cout<<"empty stack"<<endl;

    }
    else {
       cout << "pop element: ";
       cout<<Stack[top]<<endl;
           top=top-1;
    }
}

void printStack() {
    if (top == -1) {
        cout << "Stack is empty." ;
    } else {
        cout << "Stack elements are: ";
        for (int i =0; i <=top; i++) {
            cout << Stack[i] << " ";
        }

    }
}

int main() {

    push(5);
    push(50);
    push(55);
    push(59);
    push(60);
    push(65);
    push(75);
    pop();
    pop();
    push(80);
    printStack();

    return 0;
}
