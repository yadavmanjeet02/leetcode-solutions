// Title: Symmetric Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/symmetric-tree/


        if(left->val != right->val)
            return false;
    }

        return mirror(left->left,right->right)
            &&
               mirror(left->right,right->left);

            return false;
public:
    bool isSymmetric(TreeNode* root) {

        if(root==NULL)
            return true;

        return mirror(root->left,
                      root->right);
    }
};
