#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node *head = new Node(23);
    Node *n1 = new Node(24);
    Node *n2 = new Node(25);
    Node *tail = new Node(26);

    head->next = n1;
    n1->next = n2;
    n2->next = tail;
    tail->next = NULL;

     
    Node *current = head;
    string res = "";
    while (current != NULL) {
        cout<<current->data<<endl;
        current = current->next;
    }

    return 0;
}
