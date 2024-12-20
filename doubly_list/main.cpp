#include <iostream>
using namespace std;

class MyDoublyLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node* prev;
    };

    Node* prev;
    Node* next;

public:
    MyDoublyLinkedList() {
        prev = nullptr;
        next = nullptr;
    }

    void addNode(int newData) {
        Node* newNode = new Node;
        newNode->data = newData;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (prev == nullptr) {
            prev = newNode;
            next = newNode;
        } else {
            next->next = newNode;
            newNode->prev = next;
            next = newNode;
        }
    }

    void addNodeInMiddle(int newData, int position) {
        if (position <= 0) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node;
        newNode->data = newData;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (position == 1) {
            newNode->next = prev;
            prev->prev = newNode;
            prev = newNode;
        } else {
            Node* current = prev;
            int count = 1;
            while (count < position - 1 && current != nullptr) {
                current = current->next;
                count++;
            }
            if (current == nullptr) {
                cout << "Position out of range" << endl;
                return;
            }
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != nullptr) {
                current->next->prev = newNode;
            }
            current->next = newNode;
        }
    }

    void displayList() {
        Node* current = prev;
        while (current != nullptr) {
            cout << current->data << " <-> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    MyDoublyLinkedList myList;


    myList.addNode(10);
    myList.addNode(20);
    myList.addNode(30);
    myList.addNode(40);

    cout << "Original List:" << endl;
    myList.displayList();


    myList.addNodeInMiddle(25, 3);

    cout << "\nList after adding node in the middle:" << endl;
    myList.displayList();

    return 0;
}

