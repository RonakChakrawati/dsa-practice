// insertion at start of node in singly linked list

#include <iostream>
using namespace std;

struct node{
    int data ;
    node* next;
    node(int data2){
        data = data2;
        next = nullptr;
    }
};

void printList(node* head) {
    node* curr = head;

    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

node* insertAtFront(node* head , int data){
    node* newNode = new node(data);
    newNode->next = head;
    return newNode;
}

int main(){
    node* head = new node(2);
    head->next = new node(3);
    head->next->next = new node(4);
    head->next->next->next = new node(5);

    // Insert a new node at the front of the list
    int x = 1;
    head = insertAtFront(head, x);

    printList(head);

    return 0;
}