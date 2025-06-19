#include <iostream>
#include <vector>
using namespace std;
void inputVector(vector <int> &vec, int n){
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
}

void rotateArr(vector <int> &vec, int k){
    

}
int main(){
    int n;
    cin>>n;
    vector <int> vec;
    inputVector(vec,n);
}