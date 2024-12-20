#include <iostream>

using namespace std;

int maxSize = 50;

class Queue {
private:
    int queue[50];
    int front = -1;
    int rear = -1;

public:

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (front == 0 && rear == maxSize - 1);
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Error: Queue full! Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        queue[rear] = element;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty! Cannot dequeue." << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return queue[front];
    }

    void showQueue() {
        if (isEmpty()) {
            cout << "Cannot show queue because it is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; ++i) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.showQueue();

    cout << "Front element: " << myQueue.frontElement() << endl;

    myQueue.dequeue();
    myQueue.dequeue();

    myQueue.showQueue();

    return 0;
}
