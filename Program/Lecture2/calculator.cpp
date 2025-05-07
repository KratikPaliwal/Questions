#include <iostream>
using namespace std;
int main(){
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n"<<"You we get the Modulo\n";
    int a,b,ch;
    cin>>a>>b>>ch;
    if(ch==1){
        cout<<a+b<<endl;
    }
    else if(ch==2){
        cout<<a-b<<endl;
    }
    else if(ch==3){
        cout<<a*b<<endl;
    }
    else if(ch==4)
    {
        cout<<a/b<<endl;
    }
    else if(ch==5){
        cout<<a%b<<endl;
    }
    cout<<(5%3)<<endl;
    return 0;
    
}