// Title: Subsets II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/subsets-ii/

class Solution {
private:
    void find(int ind,int n,vector<int>& nums,vector<vector<int>>&ans,vector<int>&ds){
        ans.push_back(ds);
        for(int i=ind;i<n;i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            find(i+1,n,nums,ans,ds);
            ds.pop_back();
        }

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        int n=nums.size();
        find(0,n,nums,ans,ds);
        return ans;
