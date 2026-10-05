class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int , int > temp ;
        for ( int i = 0 ; i <= n ; i++ ){
            temp[i]++ ;
        }
        for( int i : nums){
            temp[i]++ ;
        }
        // int count = -1 ;
        for( int i = 0 ; i <= n ; i++) {
            if( temp[i] == 1 ){
                return i ;
            }
            
        }
    return -1;
    }
};