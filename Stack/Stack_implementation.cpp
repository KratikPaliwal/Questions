#include <iostream>
#include <vector>
using namespace std;
class Stack{ 
    vector<int>v;
    public :
    void push(int val){
        v.push_back(val);
        return;
    }
    void pop(){
        v.pop_back();
        return;
    }
    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        if(v.size()==0){
            return true;
        }
        return false;
    }

};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
    
}
