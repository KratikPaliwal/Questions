class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int count1=0;
        int maxcount=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                count1++;
                maxcount=max(maxcount,count1);
            }else if(arr[i]==0){
                count1=0;
            }

        }
        return maxcount;
        
    }
};