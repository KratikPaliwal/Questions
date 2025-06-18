class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums.size()/2;
        for(int i : nums){
            int count =0;
            for(int j: nums){
                if(i==j){
                    count++;
                }

            }if(count>majority){
                return i;
            }
        }
        return -1;
    }
};