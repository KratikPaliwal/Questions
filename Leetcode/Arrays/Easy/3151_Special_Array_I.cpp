class Solution {
public:
    bool isArraySpecial(vector<int>& arr) {
        bool check=true;
        for(int i=0; i<arr.size()-1; i++){
            int j=i+1;
            if(arr[i]%2==0 && arr[j]%2==0){
                return false;
            }else if(arr[i]%2!=0 && arr[j]%2!=0){
                return false;
            }

        }
        return true;
        
    }
};