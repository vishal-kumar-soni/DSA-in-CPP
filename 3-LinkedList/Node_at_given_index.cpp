#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
       data = value;
       next = NULL;
    }
};

int GetNth(Node *head, int index) {
        
    Node* curr = head;
    int idx = 1;
    while(curr){
        if(idx == index) return curr->data;
        curr= curr->next;
        idx++;
    }
    return -1;
}

int main(){
    Node* Head = new Node(12);
    Node* n1 = new Node(14);
    Node* n2 = new Node(15);
    Node* n3 = new Node(17);
    Node* n4 = new Node(20);
    Node* tail = new Node(25);

    Head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = tail;

    int index = 3;
    cout<<GetNth(Head,index );

}