class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq ;
        for ( int i : nums ) {
            freq[i]++ ;
        }
        for ( int i : nums ){
            if( freq[i] == 1) {
                return i ;
            }
        }
        return -1 ;
    }
};