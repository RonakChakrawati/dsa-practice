// singly linked list
// transversing in linked list

#include <iostream>
using namespace std;

struct Node {
    int data;    // give the data
    Node* next;  // address of the next node

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main(){
     // Create the first node (head of the list)
    Node* head = new Node(10);

    // Link the second node
    head->next = new Node(20);

    // Link the third node
    head->next->next = new Node(30);

    // Link the fourth node
    head->next->next->next = new Node(40);

    // printing linked list
   
    Node* temp = head;
    while(temp!= nullptr){
        cout << temp->data << " ";
        temp = temp ->next;
    }
    
    cout <<endl;
    return 0 ;
}