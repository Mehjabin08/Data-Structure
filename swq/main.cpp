#include <iostream>
using namespace std;

class Array{
private:
    int a[70];
    int front;
    int rear;
    int MaxSize;

    bool isEmpty() {
        return (front==-1 && rear==-1);
    }

    bool isFull() {
        return (rear == MaxSize - 1);
    }

public:
    bool push(int Element) {
        if (isFull())
            return false;

        a[++rear] = Element;
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
            return -1;
        return a[rear];
    }

    void show() {
        for (int i = front; i <= rear; ++i) {
            cout << a[i] << endl;
        }
        cout << endl;
    }
};

int main() {
    Array arr;

    arr.push(55);
    arr.push(66);
    arr.push(77);

    cout << "Top element: " << arr.topElement() << endl;
    arr.pop();
    cout << "Top element after pop: " << arr.topElement() << endl;

    return 0;
}


