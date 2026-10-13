class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN ;
        int sum = 0 ;
        for( int st = 0 ; st < nums.size() ; st++ ) {
            sum = sum + nums[st] ;
            ans = max( sum , ans ) ;
            if( sum < 0 ) {
                sum = 0 ;
            }
            // for( int end = st ; end < nums.size() ; end++ ) {
            //     sum = sum + nums[end] ;
            //     ans = max( ans , sum) ;
            // }
        }
        return ans ;
    }
};