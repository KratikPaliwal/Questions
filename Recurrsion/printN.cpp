#include <iostream>
using namespace std;
int print(int n ){
    if(n==5){
        return 0;
    }
    
    return print(n-1);
    cout<<n<<endl;


}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;

}