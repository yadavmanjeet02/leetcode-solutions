// Title: Maximum Depth of Binary Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

 * };
 */
class Solution {
private: 
    int solve(TreeNode* root,int maxi){
        if(root==NULL) return 0;
    }

        int left =solve(root->left,maxi);
        int right=solve(root->right,maxi);
        return maxi=1+max(left,right);
public:
    int maxDepth(TreeNode* root) {
        int maxi=0;
        return solve(root,maxi);
        
    }
};
