#include <iostream>
using namespace std; 
int SumNum(int n){
    if(n==0){
       return 0;
    }
    return n+SumNum(n-1);
}
int main(){
    int n; 
    cin>>n;
    cout<<SumNum(n)<<endl;
    return 0;
}