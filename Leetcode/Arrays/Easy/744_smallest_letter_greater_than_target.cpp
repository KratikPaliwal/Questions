class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]>target){
                return arr[i];
            }
            if(i==n-1 && target>arr[i]){
                return arr[0];
            }
        }
        return arr[0];        
    }
};