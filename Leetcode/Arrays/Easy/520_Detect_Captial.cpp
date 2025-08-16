class Solution {
public:
    bool detectCapitalUse(string s) {
        int captial=0;
        int first=0;
        int small=0;
        int n=s.length();
        for(int i=0; i<n; i++){
            if( i==0&& (s[0]>='A'&&s[0]<='Z')){
                first++;

            }
            if(s[i]>='A'&& s[i]<='Z'){
                captial++;
            }
            if(s[i]>='a'&&s[i]<='z'){
                small++;
            }
        }
        if( first==1 && small==n-1){
            return true;
        }
        if(captial==n){
            return true;
        }
        if(small==n){
            return true;
        }
        return false;
        
    }
};