class Solution {
public:
    bool isPalindrome(int x) {
        long ans =0;
        int x1=x;
        if(x<0){
            return false;
        }else{
            while(x>0){
                int rem =x%10;
                x=x/10;
                ans=(ans*10)+rem;
            }if(x1==ans){
                return true;
            }else{
                return false;
            }
        }

        
    }
};
// Done 