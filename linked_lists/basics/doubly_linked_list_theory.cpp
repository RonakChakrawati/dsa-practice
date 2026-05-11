
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1 , node* next1) : data(data1),next(next1){}
    node(int data1) : data(data1) , next(nullptr){}

};

int main(){
    node* head = new node(10);  //head → [10 | NULL]
    head->next = new node(20);  //head → [10 | *] → [20 | NULL]
    head->next->next = new node(30);  
    node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}
 