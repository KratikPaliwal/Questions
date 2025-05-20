#include<iostream>
#include <vector>
#include <climits>
using namespace std;

void vectorInput(vector <int> &vec, int n){
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    return;

}

vector <int> pairSum(vector <int> vec, int n, int target){
    vector <int> ans;
    int i=0; 
    int j=vec.size()-1;
    while (i<j){
        int sum =vec[i]+vec[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else if(target==sum){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
    

    }


int main(){
    vector <int> vec;
    int n;
    cin>>n;
    vectorInput(vec,n);
    int target;
    cin>>target;
   vector <int> ans = pairSum(vec,n,target);
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }


}