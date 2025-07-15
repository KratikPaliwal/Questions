#include <iostream>
using namespace std;

void InputArray(int matrix[][100], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
}
bool Search(int matrix[][100], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrix[100][100];
    int row,col,target;
    cin>>row>>col>>target;
    InputArray(matrix,row,col);
    cout<<Search(matrix,row, col, target);
}