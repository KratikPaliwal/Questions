class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0; 
        if(s.length()<=2){
            return 0;

        }
        for(int i=0; i<=s.length()-3; i++){
            char a=s[i];
            char b=s[i+1];
            char c=s[i+2];
            if(a!=b && b!=c && c!=a){
                count++;
            }
            
        }
        return count;

        
    }
};