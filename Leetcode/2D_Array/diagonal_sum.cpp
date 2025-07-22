#include <iostream>
using namespace std;
void array_input(int matrix[][100],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
    return;
}

void display_array(int matrix[][100], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int diagonal_sum(int matrix[][100], int row, int col){
    int sum=0;
    for(int i=0; i<row; i++){
        sum+=matrix[i][i];
        if(i!=row-i-1){
            sum+=matrix[i][row-1-i];
        }
    }
    return sum;

}
int main(){
    int row,col;
    cin>>row>>col;
    int matrix[100][100];
    array_input(matrix,row,col);
    cout<<diagonal_sum(matrix,row,col)<<endl;
    display_array(matrix, row, col);


    
}