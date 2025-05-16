#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum =1;
    int  sumv=0;
    
    while (n>=1)
    {
        sum = n%10;
        n=n/10;
        sumv=sumv+sum;
        cout<<sum<<endl;
       
    }
    return sumv;
    
}
int main(){
    int n;
    cin>>n;
   cout<< sumOfDigits(n);
}