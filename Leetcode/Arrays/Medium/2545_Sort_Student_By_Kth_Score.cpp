class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0; i<n; ++i){
            int num=INT_MIN;
            int rowNum=-1;
            for(int j=i; j<n; ++j){
                if(arr[j][k]>num){
                    num=arr[j][k];
                    rowNum=j;
                }
            }
            for(int j=0; j<m; ++j){
                swap(arr[i][j], arr[rowNum][j]);
            }
            
        }
        return arr;
        
    }
};