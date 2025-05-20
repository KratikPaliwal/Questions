#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inputVector(vector <int> &vec, int n){
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    return;
}

void displayVector(vector <int> &vec, int n){
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}

void reverseVector(vector <int> &vec, int n){
    int start=0;
    int end=vec.size()-1;
    while (start<=end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return;
    
}
int main(){
    int n;
    cin>>n;
    vector <int> vec;
    inputVector(vec, n);
    displayVector(vec, n);
    reverseVector(vec,n);
    displayVector(vec, n);
}
