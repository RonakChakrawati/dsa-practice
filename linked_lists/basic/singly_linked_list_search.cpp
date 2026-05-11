// find length of linked list

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

int lengthLinkedList(node* head){
    node* temp = head;
    int len = 0;
    while(temp->next != nullptr){
        len++;
        temp = temp->next;
    }
    len++;
    return len;
}

int main(){
    node* head = new node(1);
    head->next = new node(3);
    head->next->next = new node(6);
    cout << lengthLinkedList(head) <<endl;
    return 0;
}