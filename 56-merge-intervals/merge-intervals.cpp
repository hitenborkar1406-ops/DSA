// sort(intervals.begin(), intervals.end()) sorts intervals by starting point
// ans.back() gives the last merged interval
// ans.back()[1] gives the ending point of the last merged interval
// intervals[i][0] gives the starting point of the current interval
// ans.empty() checks if the answer vector is empty
// If the last interval ends before the current one starts, there is no overlap
// push_back() adds the current interval to the answer vector
// max() chooses the larger ending point when merging overlapping intervals
// return ans gives the final merged intervals


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans ;
        sort( intervals.begin() , intervals.end() ) ;
        for ( int i = 0 ; i < intervals.size() ; i++ ) {
            if( ans.empty() || ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]) ;
            }
            else{
                ans.back()[1] = max( ans.back()[1] , intervals[i][1] ) ;
            }
        }
        return ans ;
    }
};