
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> result;
//         int n = nums.size();

//         // Stores unique triplets in sorted order to avoid duplicates
//         set<vector<int>> uniqueTriplets;

//         // Fix the first element of the triplet
//         for (int i = 0; i < n; i++) {

//             // Map stores the numbers we have already visited
//             unordered_map<int, int> seen;

//             // Select the second element
//             for (int j = i + 1; j < n; j++) {

//                 // Calculate the third number needed to make sum 0
//                 int third = -(nums[i] + nums[j]);

//                 // Check whether the required third number was seen
//                 if (seen.find(third) != seen.end()) {

//                     // Sort the triplet so different orders look identical
//                     vector<int> triplet = {nums[i], nums[j], third};
//                     sort(triplet.begin(), triplet.end());

//                     // Set automatically prevents duplicate triplets
//                     uniqueTriplets.insert(triplet);
//                 }

//                 // Store the current number for future lookups
//                 seen[nums[j]] = 1;
//             }
//         }

//         // Convert the set of unique triplets into the result vector
//         for (auto triplet : uniqueTriplets) {
//             result.push_back(triplet);
//         }

//         return result;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Stores all unique triplets whose sum is 0
        vector<vector<int>> result;

        // Sort the array so we can use the two-pointer approach
        sort(nums.begin(), nums.end());

        // Fix one element and find the other two elements
        for (int i = 0; i < nums.size() - 2; i++) {

            // Skip duplicate starting elements to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Left pointer starts just after the fixed element
            int left = i + 1;

            // Right pointer starts at the last element
            int right = nums.size() - 1;

            // Continue until the two pointers meet
            while (left < right) {

                // Calculate the sum of the three selected elements
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {

                    // A valid triplet is found, so store its values
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Move both pointers to search for another triplet
                    left++;
                    right--;

                    // Skip duplicate left values to avoid repeated triplets
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate right values to avoid repeated triplets
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0) {

                    // Sum is too small, so move left to a larger value
                    left++;
                }
                else {

                    // Sum is too large, so move right to a smaller value
                    right--;
                }
            }
        }

        // Return all unique triplets whose sum is 0
        return result;
    }
};
