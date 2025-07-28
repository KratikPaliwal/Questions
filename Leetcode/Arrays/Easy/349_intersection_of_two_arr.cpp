class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        vector <int> ans;
        int num=-1;
        for(int i=0; i<arr1.size(); i++){
            if(num!=arr1[i]){
                num=arr1[i];
                int count=0;
                for(int j=0; j<arr2.size(); j++){
                    if(num==arr2[j] &&count==0){
                        ans.push_back(num);
                        count++;
                    }

                }

            }
        
        }
        return ans;
    }
};