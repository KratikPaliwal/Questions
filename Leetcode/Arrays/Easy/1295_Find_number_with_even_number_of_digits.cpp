class Solution {
    int countDigits(int n){
        int count=0;
        while(n!=0){
            n=n/10;
            count++;
        }
        return count;
    }
public:
    int findNumbers(vector<int>& arr) {
        int count=0;
        for(int i=0; i<arr.size(); i++){
            int evencount=countDigits(arr[i]);
            if(evencount%2==0){
                count++;
            }
        }
        return count;
        
    }
};