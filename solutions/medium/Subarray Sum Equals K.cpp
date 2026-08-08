// Title: Subarray Sum Equals K
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/subarray-sum-equals-k/


        for (int x : nums) {
            sum += x;

            // Check if there is a previous prefix sum
            // equal to sum - k
            if (mp.find(sum - k) != mp.end()) {
                cnt += mp[sum - k];
            }

        int cnt = 0;
        int sum = 0;

        mp[0] = 1;

        // Prefix sum 0 has occurred once
        unordered_map<int, int> mp;
    int subarraySum(vector<int>& nums, int k) {
            // Store current prefix sum
            mp[sum]++;
        }
