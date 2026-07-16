// Title: Lowest Common Ancestor of a Binary Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

        TreeNode*right=check(root->right,p,q);
        if(left && right) return root;
        if(left) return left;
        if(right) return right;
        return NULL;



    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return check(root,p,q);
        
    }
};
