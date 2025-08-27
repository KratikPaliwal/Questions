class Solution {
public:
    bool canAliceWin(vector<int>& arr) {
        int single=0;
        int dig=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=9){
                single=single+arr[i];
            }else{
                dig=dig+arr[i];
            }
        }
        if(dig>single || single>dig){
            return true;
        }
        return false;
        
    }
};