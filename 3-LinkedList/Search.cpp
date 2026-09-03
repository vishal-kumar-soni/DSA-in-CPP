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

int SearchNode(Node *head, int num){
   
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

    Node *curr = head;

    while(curr){
        cout<<curr->data<<endl;
        curr= curr->next;
    }

    int target = 30;
    int ans = SearchNode(head, target);
    cout<<ans;

    return 0;

}