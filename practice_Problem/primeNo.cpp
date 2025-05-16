#include <iostream>
using namespace std;
int isPrime(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;

        }
    }
    return count;

}
int main(){
    int n;
    cin>>n;
    int count=isPrime(n);
    if(count<=2){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;

}