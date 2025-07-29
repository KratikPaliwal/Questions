class Solution {
public:
    string restoreString(string s, vector<int>& arr) {
        string ans=s;
        for(int i=0; i<s.length(); i++){
            ans[arr[i]]=s[i];
        }
        return ans;
        
    }
};