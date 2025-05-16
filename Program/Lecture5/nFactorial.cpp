#include <iostream>
using namespace std;
int nFact(int n){
    int sum=1;
    for(int i=n; i>=1; i--){
        sum =sum*i;

    }
    return sum;

}
int main(){
    int n;
    cin>>n;
    int fact = nFact(n);
    cout<<fact<<endl;
    return 0;

}