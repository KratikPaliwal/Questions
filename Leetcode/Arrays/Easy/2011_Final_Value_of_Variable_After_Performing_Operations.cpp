class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]=="++X" || arr[i]=="X++"){
                sum++;
            }else if(arr[i]=="--X"||arr[i]=="X--"){
                sum--;
            }
        }
        return sum;
        
    }
};