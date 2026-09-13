#include <iostream>
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

Node* GetNth(Node *head, int target){

    Node* newNode = new Node(-1);
    newNode->next = head;
    head = newNode;

    Node* curr = newNode;
    while (curr){
        Node* nextNode = curr->next;

        while (nextNode && nextNode->data == target  ){
            nextNode = nextNode->next;
        }
        curr->next = nextNode;
        curr = nextNode;
    }
    return head->next;

}

int main(){
    Node *Head = new Node(15);
    Node *n1 = new Node(14);
    Node *n2 = new Node(15);
    Node *n3 = new Node(17);
    Node *n4 = new Node(15);
    Node *tail = new Node(25);

    Head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = tail;

    int target = 15;
    Node *curr = GetNth(Head, target);

    while (curr){
        cout << curr->data<<endl;
        curr = curr->next;
    }
    
}