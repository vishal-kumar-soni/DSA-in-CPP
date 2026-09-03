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
 
Node* DeleteAtIdx(Node* head, int idx){

    if(head==NULL ) return NULL;

    Node* curr = head;
    int i=1;
    while(curr->next  && i!=idx-1){
        curr = curr->next;
        i++;
    }

    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;

    return head;
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

    int idx = 4;
    Node* curr = DeleteAtIdx(head, idx);

    while(curr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }

    return 0;
}