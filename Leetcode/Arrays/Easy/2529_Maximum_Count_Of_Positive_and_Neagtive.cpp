class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int pos=0;
        int neg=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<0){
                neg++;
            }
            if(arr[i]>0){
                pos++;
            }

        }
        
        int big=max(pos,neg);
        return big;
        
    }
};