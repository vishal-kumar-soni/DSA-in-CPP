#include<bits/stdc++.h>
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

int getDecimalValue(Node* head){ 
    Node* curr = head;
    int i = -1;
    while(curr){
       i++;
       curr = curr->next;
    }

    int decimal = 0;
    curr = head;
    while(curr!=NULL){
       decimal+=curr->data*(pow(2,i));
       i--;
       curr = curr->next;
    }
    return decimal;
}


int main(){
    Node* head = new Node(0);
    Node* n2 = new Node(0);
    Node* tail = new Node(1);

    head->next = n2;
    n2->next = tail;
    tail->next = NULL;

    cout<<getDecimalValue(head);
}