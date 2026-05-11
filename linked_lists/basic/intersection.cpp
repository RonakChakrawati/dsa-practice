// interesection of two linked list


#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1) : data(data1) , next(nullptr) {}
};

node* intersection(node* head1 , node* head2){
     
}

void printList(node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main(){

    return 0;
}