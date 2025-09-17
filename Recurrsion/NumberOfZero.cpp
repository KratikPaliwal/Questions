#include <iostream>
using namespace std;
int zeroCount(int n, int count){
    if(n==0){
        return count;
    }
    int rem=n%10;
    if(rem==0){
        count++;
    }
    n=n/10;
    return zeroCount(n,count);
}
int main(){
    int n;
    cin>>n;
    int ans=zeroCount(n,0);
    cout<<ans<<endl;
    return 0;

}