#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void atStart(Node *head){
    Node* curr = head;
    while(curr->next->next){
        curr=curr->next;
    }
    Node* Temp = curr->next;
    curr->next = NULL;
    delete Temp;
    
    curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    
}

int main(){
    Node *Head = new Node(13);
    Node *n1 = new Node(14);
    Node *n2 = new Node(15);
    Node *n3 = new Node(17);
    Node *n4 = new Node(15);
    Node *tail = new Node(100);

    Head->prev = NULL;
    Head->next = n1;
    n1->prev = Head;
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev  = n2;
    n3->next  = n4;
    n4->prev  = n3;
    n4->next  = tail;
    tail->prev  = n4;
    tail->next  = NULL;
  
    atStart(Head);
    
}