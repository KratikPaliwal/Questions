// Brute Force
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

vector <int> vectorProduct(vector <int> &vec){
    vector <int> vec1;
    for(int i=0; i<vec.size(); i++){
        int prod=1;
        for(int j=0; j<vec.size(); j++){
            if(j!=i){
                prod=prod*vec[j];
            }
        }vec1.push_back(prod);
    }
    return vec1;

}

int main(){
    int n;
    cin>>n;
    vector <int> vec;
    vectorInput(vec,n);
    vector<int> vec1= vectorProduct(vec);
    for(int i=0; i<vec1.size(); i++){
        cout<<vec1[i]<<endl;
    }

}

