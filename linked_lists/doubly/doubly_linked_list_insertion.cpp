// inserting the node in doubly linkedlist

#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* prev;
    node* next;
    node(int data1 , node* next1 , node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    node(int data1){
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

node* convertArrayToLL(vector<int>& arr){
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i = 1; i < arr.size() ; i++){
        node* temp = new node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";  
        head = head->next;          
    }
}

node* insertAtEnd(int val , node* head){
    node* newEndNode = new node(val);
    node* tail = head;
    if(head == nullptr){
        return newEndNode;
    }
    while(tail->next != nullptr){
        tail = tail->next;
    }
    tail->next = newEndNode;
    newEndNode->prev = tail;
    return head;
}

int main(){
    vector<int> arr = {12, 5, 8, 7, 4};

    // Convert the array into a doubly linked list
    node* head = convertArrayToLL(arr);

    // Print the initially created doubly linked list
    cout << "Doubly Linked List Initially: " << endl;
    print(head);

    // Insert a node with value 10 at the end of the doubly linked list
    cout << endl << "Doubly Linked List After Inserting at the tail with value 10: " << endl;
    head = insertAtEnd(10,head);
    print(head);
    cout << endl;
    return 0;
}