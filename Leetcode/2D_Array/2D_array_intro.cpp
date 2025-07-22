#include <iostream>
using namespace std;
void matrixInput(int matrix[3][3], int rows,int col){
        for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    
}

void matrixOutput(int matrix[3][3], int rows,int col){
        for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int matrix[3][3];
    int rows=3;
    int col=3;
    matrixInput(matrix, rows,col);
    matrixOutput(matrix,rows, col);
    return 0;


}