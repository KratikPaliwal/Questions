class Solution {
public:
    int findMaxK(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]<0){
                    if(abs(arr[i])==arr[j]){
                    return arr[j];
                }
                }
            }
        }
        return -1;

        
    }
};