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

void displayVector(vector <int> vec){

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}

void insertationSort(vector <int> &vec){
    for(int i=1; i<vec.size(); i++){
        int curr=vec[i];
        int prev=i-1;
        while (prev>=0 && vec[prev]>curr)
        {
            vec[prev+1]=vec[prev];
            prev--;
        }
        vec[prev+1]=curr;
        
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector <int> vec;
    vectorInput(vec, n);
    insertationSort(vec);
    displayVector(vec);

}