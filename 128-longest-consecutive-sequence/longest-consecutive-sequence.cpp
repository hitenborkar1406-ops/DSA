class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen = 0 ;
        int count = 1 ;
        for (int k : st) {
        if (st.find(k - 1) == st.end()) {
            int current = k ;
            int count = 1 ;
            while( st.find(current+ 1) != st.end() ) {
                current++ ;
                count++ ;
            }
            maxLen = max(maxLen , count ) ;
        }
}
    return maxLen ;
    }
};