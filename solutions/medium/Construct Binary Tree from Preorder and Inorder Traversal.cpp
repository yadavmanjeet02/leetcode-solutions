// Title: Construct Binary Tree from Preorder and Inorder Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

        root->left=build(preorder,prestart+1,prestart+numsleft,inorder,instart,inroot-1,mpp);

        return root;

        
        root->right=build(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,mpp);
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mpp;

        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }

        TreeNode*root= build(preorder,0,preorder.size()-1, inorder,0,inorder.size()-1,mpp);
        return root;
        
    }
};
