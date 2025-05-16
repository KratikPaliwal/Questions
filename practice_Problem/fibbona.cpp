#include <iostream>
using namespace std;
void fabb(int n){
    int sum1 =0;
    int sum2=1;

    for(int i=0; i<=n; i++){
        if(i==0){
            cout<<0<<" ";
        }else if(i==1){
            cout<<1<<" ";
        }
        else{
            int next=sum1+sum2;
            cout<<next<<" ";
            sum1=sum2;
            sum2=next;

        }
    }
}
int main(){
    int n;
    cin>>n;
    fabb(n);

}