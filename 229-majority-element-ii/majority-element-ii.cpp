class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int > freq ;
        set<int> ans ;
        for( int i : nums ) {
            freq[i]++ ;
            if( freq[i] > nums.size() / 3 ) {
                ans.insert(i) ;
            }
        }
        return vector<int>(ans.begin() , ans.end() ) ;
    }
};