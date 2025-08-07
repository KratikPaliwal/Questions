class Solution {
public:
    int busyStudent(vector<int>& arr1, vector<int>& arr2, int queryTime) {
        int count=0;
        for(int i=0; i<arr1.size(); i++){
            if(queryTime>=arr1[i]&&queryTime<=arr2[i]){
                count++;
            }
        }
        return count;
        
    }
};