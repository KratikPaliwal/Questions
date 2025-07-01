class Solution {
public:
    int reverse(int n) {
        int sum=0;
        while(n!=0){
            int rem=n%10;
            if((sum>INT_MAX/10)||(sum<INT_MIN/10)){
                return 0;
            }
            sum=sum*10+rem;
            n=n/10;
        }
        return sum;
    }
};