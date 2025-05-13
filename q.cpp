#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Queue class
class Queue {
private:
    Node* front; // Points to the first element
    Node* rear;  // Points to the last element

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue: insert at the rear
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            // Queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued.\n";
    }

    // Dequeue: remove from the front
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty! Nothing to dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        // If queue becomes empty after dequeue
        if (front == nullptr) {
            rear = nullptr;
        }

        cout << temp->data << " dequeued.\n";
        delete temp;
    }

    // Display the queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

// Main function to test
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue(); // Trying to dequeue when empty

    return 0;
}
