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
 
Node* ReverseLL(Node* head){
   Node* curr = head;
   Node* prevNode = NULL;

    while(curr){
        Node* nextNode = curr->next;
        curr->next = prevNode;

        prevNode = curr;
        curr = nextNode;
    }

    return prevNode;
    
}

int main(){

    Node* head = new Node(18);
    Node* n2 = new Node(32);
    Node* n3 = new Node(10);
    Node* n4 = new Node(20);
    Node* n5 = new Node(30);
    Node* tail = new Node(99);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = tail;
    tail->next = NULL;

    Node* curr = ReverseLL(head);

    while(curr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }

    return 0;
}