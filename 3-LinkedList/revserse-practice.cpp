#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data ;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* reverse(Node* head){
    Node* curr = head;

    Node* prev = NULL;
    while(curr){
        Node* nextNode = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextNode;

    }

    return prev;
}


int main(){
   int n;
   cin>>n;

   if(n==0) return 0;

   int first;
   cin>>first;
   Node* head = new Node(first);
   Node* curr = head;

    int i=1;
    while(i<n){
        int val;
        cin>>val;
        
        Node* newNode = new Node(val);
        curr->next = newNode;
        curr = curr->next;
        i++;
    }
    curr->next = NULL;

    Node* res = reverse(head);
    
    Node* temp = res;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}