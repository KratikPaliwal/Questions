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

void bubbleSort(vector <int> &vec){
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size()-i-1; j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j], vec[j+1]);
            }
        }

    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector <int> vec;
    vectorInput(vec, n);
    bubbleSort(vec);
    displayVector(vec);
}