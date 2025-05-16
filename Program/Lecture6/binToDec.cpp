#include <iostream>
using namespace std;
int binToDec(int n){
    int ans =0;
    int pow = 1;
    while (n>0)
    {
        int rem = n%2;
        n=n/2;
        ans=ans+(pow*rem);
        pow= pow*10;
        /* code */
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    int ans = binToDec(n);
    cout<<ans<<endl;

}