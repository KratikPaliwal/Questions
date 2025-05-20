#include <iostream>
#include <vector>
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
    int count =0;
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size(); j++ ){
            if(vec[i]==vec[j]){
                count++;
            }
        }
        if(count>majority){
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
    cout<<rep<<endl;


}