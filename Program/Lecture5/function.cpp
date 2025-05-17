#include <iostream>
using namespace std;
// void printHelloWorld(){
//     cout<<"Hello World"<<endl;
// }

int printHelloWorld(){
    cout<<"Hello World"<<endl;
    return 3; // the function has a return type int so it will always return any integer value
}

int sumOfTwo(int a,int b){
    int sum=a+b;
    return sum;
}

int minOfTwoNumber(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int sum1ToN(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    // int val = printHelloWorld();
    // cout<<printHelloWorld()<<endl;
    int a,b;
    cin>>a>>b;
    cout<<(sum1ToN(b));

    // cout<<sumOfTwo(a,b)<<endl;// arguments are the actual value passed to function
    // //  Parameters are the copies of arguments 

    // int min= minOfTwoNumber(a,b);
    // cout<<"min element is : "<<min<<endl;
    // return 0;
    

}