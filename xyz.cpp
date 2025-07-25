#include <iostream>
#include <vector>
using namespace std;
void arrInput(vector <int> &arr, int n){
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
}

int singleNum(vector <int> arr){
    for(int i=0; i<arr.size(); i++){
        int count=0;
        for(int j=0; j<arr.size(); j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector <int> arr;
    int n;
    cin>>n;
    arrInput(arr,n);
    cout<<singleNum(arr);

}