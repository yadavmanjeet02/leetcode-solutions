// Title: Binary Tree Right Side View
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-right-side-view/

class Solution {

private:
    void rview(vector<int>&ans,TreeNode*root,int level){
        if(root==NULL) return;

        if(level==ans.size()){
            ans.push_back(root->val);
        }
        rview(ans,root->right,level+1);
        rview(ans,root->left,level+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rview(ans,root,0);
        return ans;
    }
};
