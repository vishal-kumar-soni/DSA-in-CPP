#include <iostream>
#include <vector>
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
 
Node* ArrayToLinkedlist(vector<int> &arr){

    Node *head = new Node(arr[0]);
    Node *curr = head;
    for (int i = 1; i < arr.size(); i++){
        Node *temp = new Node(arr[i]);
        curr->next = temp;
        curr = curr->next;
    }
    return head;
}

int main(){

    vector<int> arr = {10, 20, 30, 40, 50};

    Node* head = ArrayToLinkedlist(arr);

    Node *curr = head;
    while(curr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }


    return 0;
}