// Linked list from an array by inserting at the head (comes out reversed)
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
    cout<<endl;
}

int main(){

    // Convert an array into linked list
    int arr[5] = {10,20,30,40,50};
    Node *Head = nullptr;

    for(int i=0; i<5; i++){

        // First node creation
        if(!Head){
            Head = new Node(arr[0],nullptr);
        }
        else{
            Node* temp = new Node(arr[i],nullptr);
            temp->next = Head;
            Head = temp;
        }
    }

    Print(Head);
        
}