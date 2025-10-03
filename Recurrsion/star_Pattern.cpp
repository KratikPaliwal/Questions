#include <iostream>
using namespace std;
void printStar(int row, int col){
    if(row==0){
        return;
    }
    if(col<row){
        cout<<"*"<<" ";
        printStar(row, col+1);
    }else{
        cout<<endl;
        printStar(row-1, 0);
    }
}
int main(){
    int row;
    cin>>row;
    printStar(row,0);
}