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

void selectionSort(vector <int> &vec){
    for(int i=0; i<vec.size()-1; i++){
        int smallele=i;
        for(int j=i+1; j<vec.size(); j++){
            if(vec[j]<vec[smallele]){
                smallele=j;
            }
        }
        swap(vec[i], vec[smallele]);
    }
}

void displayVector(vector <int> vec){

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    vector <int> vec;
    vectorInput(vec,n);
    selectionSort(vec);
    displayVector(vec);



}