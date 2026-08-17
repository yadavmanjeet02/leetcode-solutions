// Title: Minimum Size Subarray Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-size-subarray-sum/

        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {

            sum += nums[i];

            while (sum >= target) {

                mini = min(mini, i - start + 1);

                sum -= nums[start];
                start++;
            }
        }

        return mini == INT_MAX ? 0 : mini;
    }
};
