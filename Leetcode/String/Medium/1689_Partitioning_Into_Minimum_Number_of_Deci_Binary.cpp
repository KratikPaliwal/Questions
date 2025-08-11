class Solution {
public:
    int minPartitions(string s) {
        int small=INT_MIN;
        for(char c :s ){
            int num=c-'0';
            if(num>small){
                small=num;
            }
        }
        return small;
        
    }
};