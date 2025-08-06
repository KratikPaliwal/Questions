class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int L=0; int R=0; int dash=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='R'){
                R++;
            }
            if(s[i]=='L'){
                L++;
            }
            if(s[i]=='_'){
                dash++;
            }

        }
        if(L==R){
            return dash;
        }else if(L>R){
            L=L-R;
            return L+dash;
        }else if(R>L){
            R=R-L;
            return R+dash;
        }
        return dash;
        
    }

};