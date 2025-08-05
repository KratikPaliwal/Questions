class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int sum =0;
        sort(arr.begin(), arr.end());
         vector<vector<int>>ans;
        for(int i=0; i<arr.size(); i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            int j=i+1; int k=arr.size()-1;
            while(j<k){
                sum=arr[i]+arr[j]+arr[k];
            if(sum>0){
                k--;
            }else if(sum<0){
                j++;
            }else{
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]){
                j++;
            }
            }
            
            }

        }
        return ans;
        
    }
};