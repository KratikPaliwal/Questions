class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int extraCandies) {
        vector <bool>ans;
        int mini=INT_MIN;
        for(int i=0; i<arr.size(); i++ ){
            if(arr[i]>mini){
                mini=arr[i];
            }
        }
        for(int i=0; i<arr.size(); i++){
            int num=arr[i]+extraCandies;
            if(num>=mini){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
        
    }
};