class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        if(n<2){
            return arr;
        }
        vector<int> ans;
        unordered_map<int,int>m;
        for(int n : arr){
            m[n]++;
        }
        int occ=n/3;
        for(auto &p :m){
            if(p.second>occ){
                ans.push_back(p.first);
            }
        }
        return ans;
        
        
    }
};