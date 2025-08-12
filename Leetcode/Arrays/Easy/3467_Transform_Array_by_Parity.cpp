class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]%2==0){
                ans.push_back(0);
            }else{
                ans.push_back(1);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;

        
    }
};