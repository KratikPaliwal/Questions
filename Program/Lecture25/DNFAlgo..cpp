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

void DNFAlgo(vector <int> &vec){
    int low=0, high=vec.size()-1, mid=0;
    while (mid<=high)
    {
        if(vec[mid]==0){
            swap(vec[low],vec[mid]);
            low++;
            mid++;
        }else if(vec[mid]==1){
            mid++;
        }else{
            swap(vec[high], vec[mid]);
            high--;
        }
    }
    return;

    
}

void displayVector(vector <int> &vec){
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> vec;
    int n;
    cin>>n;
    vectorInput(vec, n);
    DNFAlgo(vec);
    displayVector(vec);

    return 0;


}