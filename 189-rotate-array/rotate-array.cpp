// For:
// [1,2,3,4,5,6,7]
// k = 3

// Step 1: Reverse the entire array
// [7,6,5,4,3,2,1]

// Step 2: Reverse the first k elements
// [5,6,7,4,3,2,1]

// Step 3: Reverse the remaining elements
// [5,6,7,1,2,3,4]
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int i = 0 , j = nums.size() - 1 ;
//         k = k % nums.size() ;
//         while ( i < j ) {
//             swap(nums[i] , nums[j] ) ;
//             i++ ;
//             j-- ;
//         }
//         i = 0 , j = k - 1 ; 
//         while( i < j) {
//             swap(nums[i] , nums[j] ) ;
//             i++ ;
//             j-- ;
//         }
//         i = k ; j = nums.size() - 1 ;
//         while( i < j) {
//             swap(nums[i] , nums[j] ) ;
//             i++ ;
//             j-- ;
//         }
//     }
// };

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};