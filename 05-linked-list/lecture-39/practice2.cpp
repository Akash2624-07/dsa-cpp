// Insertion in Linked List
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

    // Insertion in the beginning
    Node *temp = new Node(0,nullptr);
    temp->next = Head;
    Head = temp;
    
    Print(Head);

    // One Line Version
    // Head = new Node(0,Head);

    // Insertion in middle (after and before edition)
    // after 20, insert 25
    Node *curr = Head;
    while( curr!=nullptr && curr->data!=20){
        curr = curr->next;
    }
    if(curr!=nullptr){
        temp = new Node(25,nullptr);
        temp->next = curr->next;
        curr->next = temp;

        // One Liner
        // curr->next = new Node(25,curr->next);
    }
    Print(Head);

    //insert 35 before 40 - we need 2 pointers as if we are on 40, we have no way to manipulate 30.
    Node *prev = nullptr; curr = Head;
    
    while(curr!=nullptr && curr->data!=40){
        prev = curr;
        curr = curr->next;
    }

    if(curr!=nullptr){
        Node *temp = new Node(35,nullptr);
        
        if(prev){
            prev->next = temp;
        }
        else{
            // prev = temp; Not really needed/
            Head = prev;
        }
        temp->next = curr;
        // One line version - prev->next = new Node(35, curr);
    }
    Print(Head);

    

    // Insertion at the end - insert 60 at the end
    Tail->next = new Node(60, nullptr);
    Tail = Tail->next;

    Print(Head);
        
}