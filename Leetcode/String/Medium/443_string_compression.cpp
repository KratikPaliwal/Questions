class Solution {
public:
    int compress(vector<char>& chars) {
        int indx=0;
        int n=chars.size();
        for(int i=0; i<n; i++){
            int count =0;
            int ch=chars[i];
            while(i<n && chars[i]==ch){
                count++;
                i++;
            }
            if(count==1){
                chars[indx++]=ch;
            }else{
                chars[indx++]=ch;
                string str=to_string(count);
                for(char dia : str){
                    chars[indx++]=dia;
                }
            }
            i--;
        }
        chars.resize(indx);
        return indx;
        
    }
  
};