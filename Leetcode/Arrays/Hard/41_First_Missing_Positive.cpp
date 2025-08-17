class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        unordered_map<int,int>m;
        int n=arr.size();
        for(int i=1; i<=n+1; i++){
            m[i]++;
        }
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                m[arr[i]]++;
            }
        }
        int mini=INT_MAX;
        for(auto &p : m){
            if(p.second==1){
                if(p.first<mini){
                    mini=p.first;
                }
            }
            
        }
        return mini;
        
    }
};