#include <iostream>
using namespace std;

#define MAX 100

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue: add element to rear
    void enqueue(int value) {
        if (rear >= MAX - 1) {
            cout << "Queue Overflow! Cannot enqueue " << value << ".\n";
            return;
        }

        if (front == -1) front = 0; // First element being inserted
        arr[++rear] = value;
        cout << value << " enqueued.\n";
    }

    // Dequeue: remove element from front
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Nothing to dequeue.\n";
            return;
        }

        cout << arr[front++] << " dequeued.\n";

        // Reset when queue becomes empty
        if (front > rear) {
            front = rear = -1;
        }
    }

    // Display the queue
    void display() {
        if (front == -1) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue (front to rear): ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

// Test in main
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();  // Should show 10 20 30

    q.dequeue();  // Removes 10
    q.display();  // Should show 20 30

    q.dequeue();
    q.dequeue();
    q.dequeue();  // Underflow test

    return 0;
}
