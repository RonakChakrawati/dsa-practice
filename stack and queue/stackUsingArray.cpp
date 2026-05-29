#include <iostream>
using namespace std;

class stackImp{
    public:
    int nums[10];
    int top = -1;
    void push(int x){
        if(top == 9){ 
            cout << "Stack Overflow\n";
            return;
        }
        else{
            top++;
            nums[top] = x;
        }
    }
    void pop(){
        if(top==-1){
            cout << "there is no element in it" << endl;
        }
        else{
            top = top-1;
        }
    }
    void topp(){
        if(top == -1){
            cout << "there is no element here" << endl;
            return;
        }
        cout << nums[top] << endl;
    }
    
    void size(){
        cout << top+1 << endl;
    }

    void display(){
        for(int i = 0 ; i <= top ; i++){
            cout << nums[i] << " ";
        }
        cout<< endl;
    }
};

int main(){
    stackImp s1;
    s1.push(6);
    s1.display();
    s1.push(5);
    s1.display();
    s1.push(2);
    s1.display();
    s1.push(0);
    s1.display();
    s1.size();
    s1.topp();
    s1.display();
    s1.pop();
    s1.display();
    s1.topp();
    s1.push(0);
    s1.display();
    s1.pop();
    s1.display();
    s1.topp();
    s1.display();
    return 0;
}