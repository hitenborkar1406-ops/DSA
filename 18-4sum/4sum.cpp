// 1. Sort the array to use the two-pointer approach.
// 2. Create a set to store unique quadruplets.
// 3. Fix the first number using the i loop.
// 4. Skip duplicate first numbers.
// 5. Fix the second number using the j loop.
// 6. Skip duplicate second numbers.
// 7. Set left and right pointers for the remaining numbers.
// 8. Calculate the sum using long long to prevent overflow.
// 9. If the sum equals target, store the quadruplet.
// 10. Move both pointers after finding a valid quadruplet.
// 11. Skip duplicate values at the left pointer.
// 12. Skip duplicate values at the right pointer.
// 13. If sum is too small, move left forward; if too large, move right backward.
// 14. Convert the set into the required vector return type.
// 15. Return all unique quadruplets.


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j]
                                  + nums[left] + nums[right];

                    if (sum == target) {
                        ans.insert({nums[i], nums[j],
                                    nums[left], nums[right]});
                        left++;
                        right--;

                        while (left < right &&
                               nums[left] == nums[left - 1])
                            left++;

                        while (left < right &&
                               nums[right] == nums[right + 1])
                            right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
