#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to take input until -1
Node* takeInput() {
    int data;
    cin >> data;

    Node* head = NULL;
    Node* tail = NULL;

    while (data != -1) {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        cin >> data;
    }
    return head;
}

// Traversal
void Traversal(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL";
}

int main() {
    cout << "Enter linked list values (-1 to stop): ";
    Node* head = takeInput();
    Traversal(head);
    return 0;
}
