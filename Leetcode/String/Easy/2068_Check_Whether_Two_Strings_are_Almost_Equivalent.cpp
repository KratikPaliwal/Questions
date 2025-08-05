class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char c: word1){
            m1[c]++;
        }
        for(char c : word2){
            m2[c]++;
        }
        for(char c ='a' ;c<='z'; c++){
            if(abs((m1[c])-(m2[c]))>3){
                return false;
            }
        }
        return true;
    }
};