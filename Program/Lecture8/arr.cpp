#include <iostream>
using namespace std;
int main(){
    // int arr[5]={1,2,4,5,6};
    // To print elements of the array 
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<endl;


    // }
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max =INT_MIN;
    int min= INT_MAX;
    int min_idx=0;
    int max_idx=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i]; //We use INT_MAX to store the largest value in the largest value in the array nearly equal to plus infinity 
            max_idx = i;
        }
    }cout<<max<<endl;
    cout<<max_idx<<endl;

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];//INT_MIN to store the smallest value in varible nearly equal to minuse infinity
            min_idx=i;
        }
    }cout<<min<<endl;
    cout<<min_idx<<endl; 


}