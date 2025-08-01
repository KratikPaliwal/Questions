class Solution {
public:
    string defangIPaddr(string s) {
        string ans;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='.'){
                ans=ans+"[.]";
            }else{
                ans=ans+s[i];
            }
            

            

        }
        return  ans;

        
    }
};