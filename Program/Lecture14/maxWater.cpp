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

int calMaxWater(vector <int> &vec, int n){
    int ans=0;
    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++ ){
            int width = j-i;
            int height = min(vec[i],vec[j]);
            int maxWater=height*width;
            ans = max(ans,maxWater);
        }
    }
    return ans;
}
int main(){
    int n; 
    cin>>n;
    vector <int> vec;
    inputVector(vec, n);
    int maxWater=calMaxWater(vec,n);
    cout<<maxWater<<endl;
}

