// inserting a node at end of linked list

#include <iostream>
using namespace std;

// initialized a linked list
struct node{
    int data;
    node* next;
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* insertAtEnd(node* head , int data){
    if(head == nullptr) return head;
    node* newNode = new node(data);
    node* last = head;

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = newNode;
    return head;
}

void printList(node* node) {
    while (node != nullptr) {
        cout << node->data;
        if (node->next != nullptr) {
            cout << " -> ";
        }
        node = node->next;
    }
    cout << endl;
}

int main(){
    node* head =new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head = insertAtEnd(head,10);
    printList(head);
    cout << endl;

    return 0;
}