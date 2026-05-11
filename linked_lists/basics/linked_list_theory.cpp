//  linkedlist is linear non contigous data structure
// it is a collection of nodes which stores two value about its value and next/previous pointer which store the address of neext/previous node 
// dynamic data structure(allocates needed memory while running)
// first node of linked list is know as head
// stores in heap
// we can use stack or queue as well
// uses in gps navigation and music playlist and browsers

// we use linked lsit instead of array beacause if flexibility . we can delete and insert the data in O(1)
// array takes O(n)

// three types of linked list 
// 1. singly linked list
// 2. doubly linked list
// 3. circular linked list

// we take pointer at next node and last we put null


#include <iostream>
using namespace std;


// structure of  singly linked list 
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// doubly linked list
struct NODE{
    int data;
    NODE* next;
    NODE* prev;
};


void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printList(head);
    cout <<endl;
}