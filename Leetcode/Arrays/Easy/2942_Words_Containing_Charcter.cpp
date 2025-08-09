class Solution {
public:
    vector<int> findWordsContaining(vector<string>& arr, char x) {
        int n=arr.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            string s=arr[i];
            int count=0;
            for(int j=0; j<s.length(); j++){
                if(s[j]==x){
                    count++;
                }
            }
            if(count>0){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};