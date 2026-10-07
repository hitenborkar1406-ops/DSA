// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map< int , int > freq ;
//         for( int i :nums) {
//             freq[i]++ ;
//         }
//         int n = nums.s  
//     }
// };
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        int maxFreq = 0;
        int ans = 0;

        for (int x : nums) {
            freq[x]++;

            if (freq[x] > maxFreq) {
                maxFreq = freq[x];
                ans = x;
            }
        }

        return ans;
    }
};