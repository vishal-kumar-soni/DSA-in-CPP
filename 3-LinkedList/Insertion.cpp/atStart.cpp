#include <iostream>
using namespace std;

// Node class
class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
 
Node* InsertStart(Node* head, int insertValue) {

    Node* newNode  = new Node(insertValue);

    Node* current = newNode;
    current->next = head;
    head = current;

    return head;
}

int main(){

    Node* head = new Node(18);
    Node* n2 = new Node(32);
    Node* n3 = new Node(10);
    Node* tail = new Node(99);

    head->next = n2;
    n2->next = n3;
    n3->next = tail;
    tail->next = NULL;

    int insertValue = 100; 
    Node* curr = InsertStart(head, insertValue);

    while(curr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }

    return 0;
}