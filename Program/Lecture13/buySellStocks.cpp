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
int Stock(vector <int> &vec){
    int buy=0; 
    int sell =0;
    int profit=0;
    for(int i=0; i<vec.size(); i++){
        buy=vec[i];
        sell=vec[i+1];
        if((sell-buy)>profit){
            profit=(sell-buy);
        }

    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    vector <int> vec;
    vectorInput(vec,n);
    int profit = Stock(vec);
    cout<<profit<<endl;
}