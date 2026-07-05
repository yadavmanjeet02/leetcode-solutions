// Title: Combination Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/combination-sum/


        // Take the current element (can take again)
        if (candidates[ind] <= target) {
            ds.push_back(candidates[ind]);
            return;
        if (ind == candidates.size())
        // No more candidates
        }

            ans.push_back(ds);
            return;
        // Found a valid combination
        if (target == 0) {
    void solve(int ind, vector<int>& candidates, int target) {


    vector<vector<int>> ans;
    vector<int> ds;
private:
class Solution {
