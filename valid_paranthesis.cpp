#include <iostream>
using namespace std;

void balance_parentheses();

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        balance_parentheses();  // Calling function for checking brackets
    }

    return 0;
}

void balance_parentheses() {
    char Stack[1000];  // Array simulating stack, large enough for most typical expressions
    int top = -1;  // Initialize the top of the stack to -1 (indicating an empty stack)
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        // For opening bracket
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            Stack[++top] = s[i];  // Push operation: increment `top` and add element
        }
        // For closing bracket
        else if (s[i] == '}' || s[i] == ']' || s[i] == ')') {
            if (top == -1) {  // Stack is empty, and a closing bracket is encountered
                cout << "NO" << endl;
                return;  // Early return if brackets are unmatched
            }

            // Check if the current closing bracket matches the top of the stack
            if ((s[i] == '}' && Stack[top] == '{') ||
                (s[i] == ']' && Stack[top] == '[') ||
                (s[i] == ')' && Stack[top] == '(')) {
                top--;  // Pop operation: decrement `top` if it's a matching pair
            } else {
                cout << "NO" << endl;  // Mismatched brackets
                return;  // Early return if there's a mismatch
            }
        }
    }

    // If the stack is empty after processing the string, the expression is balanced
    if (top == -1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;  // If there are still unmatched opening brackets
}
