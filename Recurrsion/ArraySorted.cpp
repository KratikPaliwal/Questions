#include <iostream>
#include <vector>
using namespace std;
bool sortedArr(vector <int> &arr, int n){
    if(n==arr.size()-1){
        return true;
        
    }
    return arr[n]<arr[n+1] && sortedArr(arr, n+1); 
}

int main(){
    vector <int> arr={1,5,3,4};
    bool ans =sortedArr(arr,0);
    cout<<ans<<endl;

}