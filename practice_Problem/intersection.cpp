#include <iostream>
using namespace std;
void inputArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void intersection(int arr[],int arr1[],int n, int t){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr1[j]){
                cout<<"The common element are : "<<arr[i]<<endl;
            }


        }
    }
}
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    int arr1[t];
    inputArr(arr,n);
    inputArr(arr1,t);
    intersection(arr, arr1, n, t);
}