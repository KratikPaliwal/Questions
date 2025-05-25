#include <iostream>
#include <vector>
using namespace std;
void vectorInput(vector <int> &vec, int n){
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    return;
    

}

int binarySearch(vector <int> &vec, int tar){
    int start=0;
    int end=vec.size()-1;
    while (start<=end)
    {
        int mid = start+end;
        if(vec[mid]>tar){
            end=mid-1;
        }else if(vec[mid]<tar){
            start=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
    

}
int main(){
    int n;
    cin>>n;
    vector <int> vec;
    vectorInput(vec,n);
    int tar;
    cin>>tar;
    cout<<binarySearch(vec,tar);
    return 0;


}