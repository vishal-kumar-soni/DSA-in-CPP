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
 
Node* DeleteEnd(Node* head){

    if(head==NULL || head->next==NULL) return NULL;

    Node* curr = head;
    while(curr->next->next){
        curr = curr->next;
    }

    Node* temp = curr->next;
    curr->next = NULL;
    delete temp;

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

    Node* curr = DeleteEnd(head);

    while(curr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }

    return 0;
}