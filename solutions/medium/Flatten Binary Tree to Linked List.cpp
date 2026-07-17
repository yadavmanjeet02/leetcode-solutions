// Title: Flatten Binary Tree to Linked List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

public:
    void flatten(TreeNode* root) {

        flatten(root->left);
        if(root==NULL) return;
        flatten(root->right);
        TreeNode*temp=root->right;
        if(root->left){
            root->right=root->left;
            while(dummy->right){
                dummy=dummy->right;
            }
            dummy->right=temp;
        }
            TreeNode* dummy=root->right;
        return;
            root->left=NULL;



        
