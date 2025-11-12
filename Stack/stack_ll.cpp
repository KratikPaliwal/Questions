#include <iostream>
#include <list>
using namespace std;

class Stack{
    list<int>L;
    public:
    void push(int val){
         L.push_front(val);
         return;
    }

    void pop(){
        L.pop_front();
        return;
    }
    int top(){
         return L.front();
    }
    bool empty(){
        return L.size()==0;

    }

};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}