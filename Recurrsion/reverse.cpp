#include <iostream>
using namespace std; 
int reverseNum(int n, int sum){
    if(n==0){
        return sum;
    }
    int rem=n%10;
    sum=(sum*10)+rem;
    return reverseNum(n/10,sum);

    
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int ans=reverseNum(n,0);
    cout<<ans<<endl;

}