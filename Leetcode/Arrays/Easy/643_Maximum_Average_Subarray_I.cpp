class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n=arr.size();
        double sum=0;
        for(int i=0; i<k; i++){
            sum=sum+arr[i];
        }
        double avgsum=sum/k;
        for(int i=k; i<n; i++){
            sum=sum+arr[i]-arr[i-k];
            avgsum=max(avgsum,sum/k);
        }
        return avgsum;

    }
};