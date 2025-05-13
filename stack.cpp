#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of stack

class Stack {
private:
    int arr[MAX]; // Array to hold stack elements
    int top;      // Index of the top element

public:
    Stack() {
        top = -1; // Stack is initially empty
    }

    // Push: insert element at the top
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << ".\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed onto the stack.\n";
    }

    // Pop: remove element from the top
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Nothing to pop.\n";
            return;
        }
        cout << arr[top--] << " popped from the stack.\n";
    }

    // Display the stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

// Test it in main
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display(); // Should show 30 20 10

    s.pop();     // Removes 30
    s.display(); // Should show 20 10

    s.pop();
    s.pop();
    s.pop();     // Underflow test

    return 0;
}
