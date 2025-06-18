class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int indx=m+n-1;
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0){
            if(arr1[i]>=arr2[j]){
                arr1[indx--]=arr1[i--];
            }else{
                arr1[indx--]=arr2[j--];
            }
        }
        while(j>=0){
            arr1[indx--]=arr2[j--];
        }
        
    }
};