class Solution {
public:
    int reduceToZero(int n, int count){
        if(n==0){
            return count;
        }
        if(n%2==0){
            n=n/2;
            count++;
        }else{
            n=n-1;
            count++;
        }
        return reduceToZero(n,count);
    }
    int numberOfSteps(int num) {
        int count=reduceToZero(num,0);
        return count;

        
    }
};