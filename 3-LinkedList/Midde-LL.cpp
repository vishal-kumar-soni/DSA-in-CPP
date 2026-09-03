#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* deleteMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
    }

    if(fast->next==NULL) return slow;
    return slow->next;
}

int main(){
    Node* head = new Node(18);
    Node* node1 = new Node(32);
    Node* node2 = new Node(10);
    Node* node3 = new Node(20);
    Node* node4 = new Node(30);
    Node* tail = new Node(99);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = tail;

    Node* curr = deleteMiddle(head);
    while (curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    
    return 0;
}