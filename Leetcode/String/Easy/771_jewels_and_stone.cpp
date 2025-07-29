class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0; i<jewels.size(); i++){
            char key=jewels[i];
            for(int j=0; j<stones.size();j++ ){
                if(key==stones[j]){
                    count++;
                }
            }
        }
        return count;
        
    }
};
