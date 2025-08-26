class Solution {
public:
    int singleNumber(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int n:arr){
            m[n]++;
        }
        for(auto &p :m){
            if(p.second==1){
                return p.first;
            }
        }
        return -1;
        
    }
};