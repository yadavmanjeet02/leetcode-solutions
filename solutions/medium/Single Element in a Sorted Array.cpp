// Title: Single Element in a Sorted Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/single-element-in-a-sorted-array/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        while(i>0){

        }
    }
        int i=nums.size()-1;
            if(nums[i]!=nums[i-1]) return nums[i];
            i-=2;
        return nums[i];
};
