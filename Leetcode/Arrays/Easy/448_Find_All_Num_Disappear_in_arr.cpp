class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<bool>check(n+1, false);
        vector<int>ans;
        for(int num:arr){
            check[num]=true;
        }
        for(int i=1; i<=n; i++){
            if(!check[i]){
                ans.push_back(i);

            }
        }
        return ans;
    }
}; 