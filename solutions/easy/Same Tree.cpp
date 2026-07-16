// Title: Same Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/same-tree/

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL && q==NULL)
            return true;

        if(p==NULL || q==NULL)
            return false;

        if(p->val != q->val)
            return false;

        bool left = isSameTree(p->left,q->left);

        return left && right;
        bool right = isSameTree(p->right,q->right);
};
    }

