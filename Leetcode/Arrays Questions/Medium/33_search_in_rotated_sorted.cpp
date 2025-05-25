class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int end=nums.size()-1;
        while(s<=end){
            int mid=s+(end-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target<=nums[mid]){
                    end=mid-1;
                }else{
                    s=mid+1;
                }

            }else{
                if(nums[mid]<=target && target<=nums[end]){
                    s=mid+1;
                }else{
                    end=mid-1;
                }

            }
        }
        return -1;
        
    }
};