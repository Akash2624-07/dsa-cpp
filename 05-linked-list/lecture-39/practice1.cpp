// Creation of a Linked List
#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // Constructor
    Node(int data, Node*next){
        this->data = data;
        this->next = next;
    }

    
};


void Print(Node *Head){
    Node *temp = Head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    // Two ways to create a single node
    
    // Node n1(24, nullptr);   Static, memory allocation in Stack
    // Node *n2 = new Node(32);  Dynamic, memory alloction in Heap
    // cout<<n1.data<<endl<<n2->data<<endl;


    // Convert an array into linked list
    int arr[5] = {10,20,30,40,50};
    Node *Head = nullptr, *Tail = nullptr;

    for(int i=0; i<5; i++){

        // First node creation
        if(!Head){
            Head = new Node(arr[0],nullptr);
            Tail = Head;
        }
        else{
            Tail->next = new Node(arr[i],nullptr);
            Tail = Tail->next;
        }
    }

    Print(Head);
        
}