class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i : arr){
            m[i]++;
        }
        unordered_map<int,int>::iterator it=m.begin();
        int res=-1;
        while(it!=m.end()){
            int number=it->first;
            int count=it->second;
            
            if(number==count){
                res=max(res,number);
                
                
            }
            it++;
        }
        return res;
        
    }
};