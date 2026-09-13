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
 
Node* DeleteFirst(Node* head){

    if(head==NULL) return NULL;

    Node* curr = head;
    head = head->next;

    curr->next = NULL;
    delete curr;

    return head;
}

int main(){

    Node* head = new Node(18);
    Node* n2 = new Node(0);
    Node* n3 = new Node(10);
    Node* tail = new Node(1);

    head->next = n2;
    n2->next = n3;
    n3->next = tail;
    tail->next = NULL;

    Node* curr = DeleteFirst(head);

    while(curr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }

    return 0;
}