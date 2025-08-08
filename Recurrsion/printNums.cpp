#include <iostream>
using namespace std;

void printNums(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    printNums(n-1);
}
int main(){
    int n;
    cin>>n;
    printNums(n);
    return 0;
}