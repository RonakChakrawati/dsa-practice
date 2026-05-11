// remove head from doubly linked list

#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next ;
    node* prev;
    node(int data1 , node* next1 , node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

void printList(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node* convertArrayToList(vector<int>& arr){
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i = 0 ; i < arr.size() ; i++){
        node* temp = new node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

node* removeHead(node* head){
    if(head == nullptr) return nullptr;
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {2,5,7,9,11,34,57,77,99};
    node* head = convertArrayToList(arr);
    head = removeHead(head);
    printList(head);
    cout << endl;
    return 0;
}