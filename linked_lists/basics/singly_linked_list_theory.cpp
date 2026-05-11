#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data1 , node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr ={2,5,7,9,12};
    node* y = new node(arr[0],nullptr);
    cout << y << endl;
    return 0;
}