// Title: Binary Tree Postorder Traversal
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-postorder-traversal/


public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root->right, ans);
    }
        postorder(root->left, ans);

            return;
        if (root == NULL)

        postorder(root, ans);

        return ans;
        
    }
        ans.push_back(root->val);
};
