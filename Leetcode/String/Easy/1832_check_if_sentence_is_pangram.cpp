class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        if(m.size()>=26){
            return true;
        }
        return false;
    }
};