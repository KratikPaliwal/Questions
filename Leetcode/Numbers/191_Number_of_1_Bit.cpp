class Solution {
public:
    int hammingWeight(int n) {
        string ans;
        while(n!=0){
            if(n%2!=0) ans=ans+'1';
            n=n/2;
        }
        ans=ans;
        int count=0;
        for(int i=0; i<ans.length(); i++){
            if(ans[i]=='1'){
                count++;
            }

        }
        return count;
        
    }
};