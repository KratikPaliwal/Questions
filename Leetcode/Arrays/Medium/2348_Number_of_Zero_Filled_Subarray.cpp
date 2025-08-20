class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        long long sum=0;
        long long count=0;
        for(int num:arr){
            if(num==0){
                sum++;
                count=count+sum;
            }else{
                sum=0;
            }
        }
        return count;
        
    }
};