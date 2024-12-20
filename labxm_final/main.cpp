#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


void insertAtBeginning(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}


void printList(Node*& head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


void insertionSort(Node*& head) {
    if (!head || !head->next)
        return;

    Node* sorted = nullptr;
    Node* current = head;

    for ( ;current != nullptr; current = current->next) {
        Node* nextNode = current->next;
        if (!sorted || sorted->data >= current->data) {
            current->next = sorted;
            sorted = current;
        } else {
            Node* search = sorted;
            for (; search->next && search->next->data < current->data; search = search->next);
            current->next = search->next;
            search->next = current;
        }
    }

    head = sorted;
}

int main() {
    Node* head = nullptr;


    insertAtBeginning(head, 1);
    insertAtBeginning(head, 6);
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 9);
    insertAtBeginning(head, 2);

    cout << "Original list: ";
    printList(head);


    insertionSort(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}

