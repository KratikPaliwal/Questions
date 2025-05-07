#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // // int i=1;
    // // while(i<=n){
    // //     cout<<i<<" ";
    // //     i++;
    // // }
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;

    int n;
    cin>>n;
    int sum=0;

    // for(int i=0; i<=n; i++){
    //     sum=sum+i;
    //     cout<<sum<<" ";

    // }
    int i=0;
    while(i<=n){
        sum = sum+i;
        cout<<sum<<" ";
        if(i==6){
            break;// break is a keyword 
        }
        i++;

    }
    cout<<sum<<endl;
    return 0;
}