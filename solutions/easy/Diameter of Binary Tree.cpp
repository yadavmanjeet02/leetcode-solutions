// Title: Diameter of Binary Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/diameter-of-binary-tree/

        // update diameter
        maxi = max(maxi,left+right);

        // return height
        return 1 + max(left,right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {

        int maxi = 0;

        solve(root,maxi);
        return maxi;
    }

};
