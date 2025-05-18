#include<iostream>
#include <vector>
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
    for(int i:vec ){
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}
int linearSearch(vector <int> &vec, int n, int target){
    for(int i=0; i<n; i++){
        if(vec[i]==target){
            return i;
        }

    }
     
    return -1;
}
int main(){
    vector <int> vec;
    int n;
    cin>>n;
    inputVector(vec,n);
    displayVector(vec,n);
    int target;
    cin>>target;
    cout<<linearSearch(vec,n, target)<<endl;


}