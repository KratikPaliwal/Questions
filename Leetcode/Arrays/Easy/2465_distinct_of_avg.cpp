class Solution {
public:
    int distinctAverages(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int st=0; 
        int end=arr.size()-1;
        double sum=0;
        unordered_map<double,int>m;
        while(st<end){
            sum=(arr[st]+arr[end])/2.0;
            m[sum]=1;
            st++;
            end--;
        }
        return m.size();
       
        
    }
};