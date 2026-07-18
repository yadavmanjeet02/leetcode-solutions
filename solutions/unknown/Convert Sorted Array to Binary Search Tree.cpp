// Title: Convert Sorted Array to Binary Search Tree
            // Difficulty: Unknown
            // Language: C++
            // Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
private:

    TreeNode* build(vector<int>& nums,
                    int start,
                    int end){

        if(start>end)
            return NULL;

        int mid=(start+end)/2;

        TreeNode* root=
            new TreeNode(nums[mid]);

        root->left=
            build(nums,start,mid-1);

        root->right=
            build(nums,mid+1,end);
