#include <iostream>
using namespace std;
void armstrongNumber(int n){
    int sum=0;
    int number=n;
    while (number!=0)
    {
        int digit=number%10;
        sum=sum+(digit*digit*digit);
        number=number/10;
    }
    if(sum==n){
        cout<<"It is a armstrong Number"<<endl;
    }else{
        cout<<"Not a armstrong Number"<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    armstrongNumber(n);
    return 0;
}