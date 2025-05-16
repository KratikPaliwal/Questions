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
    int n,r;
    cin>>n>>r;
    int fact_n = nFact(n);
    int fact_r = nFact(r);
    int fact_nr = nFact((n-r));


    int result = fact_n/((fact_r)*(fact_nr));
    cout<<result<<endl;
    return 0;

}