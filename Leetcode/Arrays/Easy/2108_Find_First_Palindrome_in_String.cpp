class Solution {
public:
    string firstPalindrome(vector<string>& arr) {
        for(int i=0; i<arr.size(); i++){
            string s=arr[i];
            int st=0;
            int end=s.length()-1;
            bool ispali=true;
            while(st<end){
                if(s[st]!=s[end]){
                    ispali=false;
                    break;
                }
                st++;
                end--;
                
            }
            if(ispali){
                    return s;
                }
        }
        return "";
        
    }
};