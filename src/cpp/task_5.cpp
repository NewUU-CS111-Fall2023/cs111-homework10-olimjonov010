/*
 * Author: Odiljon Olimjonov
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <algorithm>

class Problem5 {
public:
    static bool hasTripletSumZero(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    return true;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return false;
    }
};
