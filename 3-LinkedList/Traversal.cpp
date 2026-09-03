#include<iostream>
using namespace std;

// Node class
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

// Functions that Traverse entire LinkedList
void  Traversal(Node *head){
    Node *curr = head;

    while(curr){
        cout<<curr->data<<" -> ";
        curr= curr->next;
    }

}

int main(){

   // Creating Nodes
    Node *head = new Node(10);
    Node *n1 = new Node(20);
    Node *n2 = new Node(30);
    Node *n3 = new Node(40);
    Node *tail = new Node(50);

   // Linking Nodes
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = tail;
    tail->next = NULL;
  
    // Calling the Traversal function
    Traversal(head);

    return 0;

}