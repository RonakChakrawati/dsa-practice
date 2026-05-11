// reverse linked list

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

void printList(node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

node *reverseList(node *head) {
    node *curr = head, *prev = nullptr , *next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head = reverseList(head);
    printList(head);
    return 0;
}
