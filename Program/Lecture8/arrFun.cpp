#include <iostream>
using namespace std;
void insertValue(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    insertValue(arr,n);
    printArr(arr,n);
}