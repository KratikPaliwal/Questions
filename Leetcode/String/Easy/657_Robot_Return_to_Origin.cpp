class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int>m;
        for(char c :moves){
            m[c]++;
        }
        if(m['L']==m['R']&& m['D']==m['U']){
            return true;
        }
        return false;
        
        
    }

};