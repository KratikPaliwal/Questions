class Solution {
public:
    string thousandSeparator(int n) {
        string no=to_string(n);
        string ans;
        int count=0;
        for(int i=no.length()-1; i>=0; i--){
            ans=ans+no[i];
            count++;
            if(count==3&&i>0){
                ans=ans+'.';
                count=0;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
        
    
};