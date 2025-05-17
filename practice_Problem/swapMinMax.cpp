#include <iostream>
using namespace std;
void inputArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int maxIndex(int arr[], int n){
    int max=INT_MIN;
    int index=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    return index;
}

int minIndex(int arr[],int n){
    int min=INT_MAX;
    int index=-1;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }

    }return index;
}
void swapMinMax(int min, int max,int arr[],int n){
    swap(arr[min],arr[max]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    inputArr(arr,n);
    int maxIndx = maxIndex(arr,n);
    int minIndx = minIndex(arr,n);
    swapMinMax(maxIndx,minIndx,arr,n);



}