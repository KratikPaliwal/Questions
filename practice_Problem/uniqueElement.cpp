#include <iostream>
using namespace std;
void inputArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int uniqueElement(int arr[],int n){
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }if(count==1){
           return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    inputArr(arr,n);
    cout<<uniqueElement(arr,n)<<endl;
}