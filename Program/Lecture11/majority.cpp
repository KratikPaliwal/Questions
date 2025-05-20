#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void inputVector(vector <int> &vec, int n){
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    return;
}
int majorityEle(vector <int> vec, int n){
    int majority = n/2;
    int count =1;
    int ans = vec[0];
    sort(vec.begin(),vec.end());
    for(int i=1; i<n; i++){
        if(vec[i]==vec[i-1]){
            count++;
        }else{
            count=1;
            ans=vec[i];
            
        }if(count>majority){
            return vec[i];
        }
    }

    }

int main(){
    int n;
    cin>>n;
    vector <int> vec;
    inputVector(vec,n);
    int rep = majorityEle(vec,n);
    cout<<"Majority element is : "<<rep<<endl;


}