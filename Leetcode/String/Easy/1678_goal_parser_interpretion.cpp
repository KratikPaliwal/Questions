class Solution {
public:
    string interpret(string s) {
        string sub;
        string ans;
        for(int i=0; i<s.size(); i++){
            sub=sub+s[i];
            if(sub=="G"){
                sub="";
                ans=ans+'G';
            }else if(sub=="()"){
                sub="";
                ans=ans+'o';
            }else if(sub=="(al)"){
                sub="";
                ans=ans+"al";
            }

        } 
        return ans;
    }
};