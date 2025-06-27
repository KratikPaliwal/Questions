class Solution {
public:

    bool isfreqsame(int freq[], int windfreq[]){
        for(int i=0; i<26; i++){
            if(freq[i]!=windfreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }

        int Windsize=s1.length();
        for(int i=0; i<s2.length(); i++){
            int Windx=0, indx=i;
            int windfreq[26]={0};
            while(Windx<Windsize && indx<s2.length()){
                windfreq[s2[indx]-'a']++;
                Windx++;
                indx++;
        }
        if(isfreqsame(freq, windfreq)){
            return true;
        }
     
        
        }
        return false;
    }
};