// 3. Remember the indexing pattern
// Direction	Matrix access
// Top row → right	matrix[top][j]
// Right column ↓	matrix[j][right]
// Bottom row ←	matrix[bottom][j]
// Left column ↑	matrix[j][left]
// The key rule is that the row index comes first, and the column index comes second.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n  = matrix[0].size() ;
        int top = 0 , bottom = m - 1 ;
        int left = 0 , right = n - 1 ;
        vector<int> ans ;
        while ( top <= bottom && left <= right ) {
            for ( int j = left ; j <= right ; j++ ) {
                ans.push_back(matrix[top][j]) ;
            }
            top++ ;
            for ( int j = top ; j <= bottom ; j++ ) {
                ans.push_back(matrix[j][right]) ;
            }
            right-- ; 
            if( top <= bottom ) {
                for ( int j = right ; j >= left ; j-- ){
                    ans.push_back(matrix[bottom][j]) ;
                }
                bottom-- ;
            }
            if ( left <= right ) {
                for( int j = bottom ; j >= top ; j-- ) {
                    ans.push_back(matrix[j][left] ) ;
                }
                left++ ;
            }
        }
        return ans ;
    }
};