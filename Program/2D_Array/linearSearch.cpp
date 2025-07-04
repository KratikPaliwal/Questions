#include <iostream>
#include <utility>
using namespace std;

void inputMatrix(int matrix[3][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
}

pair<int,int> linearSearch(int matrix[3][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++ ){
            if(matrix[i][j]==key){
                return make_pair(i,j);
               
            }
        }
    }
    return make_pair(-1,-1);

}
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    int matrix[3][3];
    inputMatrix(matrix, row, col);
    int key;
    cin>>key;
    pair<int,int> pos =linearSearch(matrix, row, col, key);
    cout<<pos.first<<" "<<pos.second<<endl;
}