#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void inputVector(vector <int> &vec, int n){

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);

    }
    return;
}
int main(){
    vector <int> vec;
    int n; 
    cin>>n;
    inputVector(vec, n);
    int maxSum=INT_MIN;
    for(int start=0; start<n; start++){
        int currSum=0;
        for(int end=start; end<n; end++){
            currSum=currSum+vec[end];
            maxSum=max(maxSum,currSum);
        }
    }
    cout<<maxSum<<endl;
}