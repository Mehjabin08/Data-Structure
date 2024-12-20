#include <iostream>
using namespace std;

class StackWithQueue {
private:
    int q[100];
    int front;
    int rear;
    int MaxSize;

public:
    StackWithQueue() : front(0), rear(-1), MaxSize(100) {}

    bool isEmpty() {
        return front > rear;
    }

    bool isFull() {
        return rear == MaxSize - 1;
    }

    bool push(int Element) {
        if (isFull())
            return false;

        q[++rear] = Element;
        return true;
    }

    bool pop() {
        if (isEmpty())
            return false;

        --rear;
        return true;
    }

    int topElement() {
        if (isEmpty())
            return -1; // Stack is empty
        return q[rear];
    }

    void show() {
        for (int i = front; i <= rear; ++i) {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    StackWithQueue array;

     array.push(1);
    array.push(2);
    array.push(3);

    cout << "Top element: " << array.topElement() << endl;
    array.pop();
    cout << "Top element after pop: " << array.topElement() << endl;

    return 0;
}
