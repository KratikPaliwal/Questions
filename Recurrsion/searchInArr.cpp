#include <iostream>
#include <vector>
using namespace std; 
int findIndex(vector <int> arr, int index, int num){
    if(index==arr.size()){
        return -1;
    }else if(arr[index]==num){
        return index;
    }else{
        return findIndex(arr,index+1, num);
    }
    
}
int main(){
    vector <int> arr={1,2,3,5};
    int num;
    cin>>num;
    cout<<findIndex(arr,0,num);

}