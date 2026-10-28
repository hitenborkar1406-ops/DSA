class Solution {
public:
    int subtractProductAndSum(int n) {
        int m = 0;
        int k = 1 ;
        while ( n != 0 ) {
            m = n % 10 + m ;
            k = ( n % 10 )* k ;
            n = n / 10 ;
        }
        return k - m ;
    }
};