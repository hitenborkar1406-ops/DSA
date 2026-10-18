class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN ;
        for( int i = 0 ; i < nums.size() ; i++ ) {
            int temp = nums[i] ;
            ans = max( ans , temp) ;
            for( int j = i + 1 ; j < nums.size() ; j++ ) {
                temp = temp * nums[j] ;
                ans = max( ans , temp ) ;
            }
        }
        return ans;
    }
};