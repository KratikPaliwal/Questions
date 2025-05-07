#include <iostream>
using namespace std;
int main(){
    cout<<"Hello\n World\n"; // To break the line 
    cout<<"Hello "<<"World"<<endl; // To print multiple things on the same line 
    cout<<"First Name \n"<<"Last Name\n";
    float PI = 3.14f;
    cout<<PI<<endl;
    char a = 'A';
    int num = a; // implicate conversion 
    cout<<num<<endl;
    double dou = 10.66;
    int sec = (int)dou; //Explicate conversion
    cout<<sec<<endl;
    int a1 = 11;
    int b = a1++; //First initalised the value to B then will update the value of A
    cout<<b<<endl;
    cout<<a1<<endl;
    


    return 0;
}

// output is Hello World% the % is because we have not used the end of line 