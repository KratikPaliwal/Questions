class Solution {
public:
    vector<int> numberGame(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int i=0; int j=1;
        while(i<n && j<n){
            swap(arr[i],arr[j]);
            i=i+2;
            j=j+2;
        }
        return arr;
    }
};