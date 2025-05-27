class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        if(n==1){
            return arr[0];
        }
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(mid==0 && arr[0]!=arr[1]){
                return arr[mid];
            }
            if(mid==n-1&& arr[n-1]!=arr[n-2]){
                return arr[mid];
            }
            if(arr[mid]!=arr[mid+1]&& arr[mid]!= arr[mid-1]){
                return arr[mid];
            }
            if(mid%2==0){
                if(arr[mid]==arr[mid-1]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }else{
                if(arr[mid-1]==arr[mid]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
            
        }
        return -1;
        
    }
};