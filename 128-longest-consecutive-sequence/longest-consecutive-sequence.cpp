class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if ( nums.empty() ) return 0 ;
        map<int , int> freq ;
        for ( auto  i : nums ) {
            freq[i] = 1 ;
        }
        int count = 1 ;
        int ans = 1 ;
        int prev = 0 ;
        bool first = true ;
        for( auto i : freq ) {
            int curr = i.first ;
            if ( !first && curr == prev + 1 ) {
                count++ ;
            }
            else count = 1 ;
            first = false ;
            ans = max ( ans , count ) ;
            prev = curr ;
        }
        return ans ;
    }
};