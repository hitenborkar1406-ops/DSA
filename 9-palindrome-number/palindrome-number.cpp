class Solution {
public:
    bool isPalindrome(int x) {
        long long temp = 0;
        int n;
        int original = x;
        if(x < 0) return false;
        while(x != 0){
            n = x % 10 ;
            temp = temp * 10 + n;
            x = x / 10;
        }
        if(temp == original){
            return true;
        }
        else{
            return false;
        }
        return 0;
    }
};
