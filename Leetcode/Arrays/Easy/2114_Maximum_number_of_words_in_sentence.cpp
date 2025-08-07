class Solution {
public:
    int mostWordsFound(vector<string>& arr) {
        int n=arr.size();
        int maxNum=0;
        for(int i=0; i<n; i++){
            int count=0;
            string sec=arr[i];
            for(int i=0; i<sec.length(); i++){
                if(sec[i]==' '){
                    count++;
                }
            }
            maxNum=max(maxNum,count+1);
        }
        return maxNum;
        
    }
};