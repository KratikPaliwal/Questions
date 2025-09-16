#include <iostream>
using namespace std;
int sumN(int n){
    if(n==1){
        return n;
    }
    return n+sumN(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=sumN(n);
    cout<<ans;
    return 0;

}