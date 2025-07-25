#include <iostream>
using namespace std;

void inputMatrix(int matrix[][100], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
}

int maxRowSum(int matrix[][100], int row, int col){
    int sum=0;
    for(int i=0; i<row; i++ ){
        int row_sum=0;
        for(int j=0; j<col; j++){
            row_sum=row_sum+matrix[i][j];
        }
        sum=max(sum,row_sum);
    }
    return sum;
}
int main(){
    int matrix[100][100];
    int row,col;
    cin>>row>>col;
    inputMatrix(matrix, row, col);
    cout<<maxRowSum(matrix, row, col)<<endl;

}