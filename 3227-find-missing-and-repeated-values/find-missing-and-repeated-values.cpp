class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int , int> freq ;
        int n = grid.size() ;
        for( int i = 0 ; i < n ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                freq[ grid[i][j] ]++ ; 
            }
        }
        int first ;
        int sec ;
        for( int i = 1 ; i <= n * n ; i++ ) {
            if(freq[i] == 0 ) {
                sec = i ;
            }
            if( freq[i] == 2 ) {
                first = i ;
            }
        }
        return {first, sec} ;
    }
};