class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+mat[i][i];
            if(i!=n-1-i){
                sum=sum+mat[i][n-1-i];
            }
            
        }
        return sum;
        
    }
};