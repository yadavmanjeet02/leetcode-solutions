// Title: Maximum Sum BST in Binary Tree
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/

        return NodeValue(

                INT_MIN,
                INT_MAX,
                0
        );

    }


public:

    int maxSumBST(TreeNode* root) {

        solve(root);

        return maxSum;
    }
};
