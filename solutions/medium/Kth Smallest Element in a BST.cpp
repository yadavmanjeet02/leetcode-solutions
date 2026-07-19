// Title: Kth Smallest Element in a BST
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/

        }

        find(root->right,k,cnt,ans);
    }

public:
        if(cnt==k){
            ans=root->val;
            return;

        cnt++;

        find(root->left,k,cnt,ans);

        if(root==NULL) return;

    void find(TreeNode* root,int k,int& cnt,int& ans){

private:
class Solution {
