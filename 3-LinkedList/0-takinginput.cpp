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

// Traversal function
void Traversal(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL";
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0) {
        cout << "Linked List is empty";
        return 0;
    }

    int value;
    cout << "Enter value for node 1: ";
    cin >> value;

    Node* head = new Node(value);
    Node* tail = head;

    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> value;

        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }

    Traversal(head);
    return 0;
}
