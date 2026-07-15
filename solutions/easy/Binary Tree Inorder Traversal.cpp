// Title: Binary Tree Inorder Traversal
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-inorder-traversal/


        ans.push_back(root->val);

        inorder(root->right, ans);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root, ans);

        vector<int> ans;


        return ans;
    }
};
