class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        if(s.length()!=t.length()){
            return false;
        }
        for(char c1 :s){
            m1[c1]++;
        }
        for(char c2 :t){
            m2[c2]++;
        }
        if(m1==m2){
            return true;
        }
        return false;
        
        
    }
};