class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        int s=0;
        int e=n;
        vector <int> ans;
        while(s<n && e<arr.size()){
            ans.push_back(arr[s]);
            ans.push_back(arr[e]);
            s++;
            e++;
        }
        return ans;

        
    }
};