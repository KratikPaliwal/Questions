class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector <int> ans;
        int srow=0; int erow=m-1;
        int scol=0; int ecol=n-1;
        while(srow<=erow && scol<=ecol){
            for(int j=scol; j<=ecol; j++ ){
                ans.push_back(mat[srow][j]);

            }
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(mat[i][ecol]);
            }
            for(int j=ecol-1; j>=scol; j--){
                if(srow==erow){
                    break;
                }
                ans.push_back(mat[erow][j]);
            }
            for(int i=erow-1; i>=srow+1; i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(mat[i][scol]);
                
            }
            srow++; erow--;
            scol++; ecol--;
        }
        return ans;
        
    }
};