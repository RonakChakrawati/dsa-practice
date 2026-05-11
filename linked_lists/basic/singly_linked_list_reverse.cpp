// middle element inn linked list
// two pointer fast and slow


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

node* findMiddleElement(node* head){
    node* slow = head;
    node* fast = head; 
    while(fast!= nullptr && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int printElement(node* head){
    if(head == nullptr) return -1;
    return findMiddleElement(head)->data;
}

int main(){
    node* head = new node(1);
    head->next = new node(3);
    head->next->next = new node (7);
    head->next->next->next = new node(9);
    cout << printElement(head) << endl;
    return 0;
}