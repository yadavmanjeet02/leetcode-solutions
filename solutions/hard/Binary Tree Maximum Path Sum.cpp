// Title: Binary Tree Maximum Path Sum
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/

        if(root==NULL) return 0;
    }

        int leftsum = max(0, solve(root->left, maxi));
        int rightsum = max(0, solve(root->right, maxi));
        

        return (root->val)+max(leftsum,rightsum);
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
        maxi=max(maxi,leftsum+rightsum+root->val);
    }   
};
    int solve(TreeNode* root,int& maxi){
private:
class Solution {
 */
 * };
