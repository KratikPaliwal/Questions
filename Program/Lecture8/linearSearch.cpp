#include <iostream>
using namespace std;

void inputArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    } return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    inputArr(arr,n);
    int tar;
    cin>>tar;
    int index = linearSearch(arr,n,tar);
    if(index<0){
        cout<<"Index does not found"<<endl;
    }else{
        cout<<"Element present at index : "<<index<<endl;
    }
    return 0;


}