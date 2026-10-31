// 4. Why do we use * before max_element?
// This is the most important part.

// max_element() returns an iterator, not the actual integer.

// The * (dereference operator) accesses the value at the iterator's position.

// For example:
// auto it = max_element(candies.begin(), candies.end());

// cout << *it;  // Output: 5

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size() ;
        vector<bool> ans(n) ;
        int maxi = *max_element( candies.begin() , candies.end() ) ;
        for ( int i = 0 ; i < n ; i++ ) {
            int sum = candies[i] + extraCandies ;

            if( sum >= maxi ) {
                ans[i] = true ;
            }
            else {
                ans[i] = false ;
            }
        }
        return ans ;
    }
};