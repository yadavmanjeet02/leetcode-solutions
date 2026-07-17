// Title: Construct Binary Tree from Inorder and Postorder Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

        root->left=build(postorder,poststart-numsright-1,postend,inorder,instart,inroot-1,mpp);
        
        root->right=build(postorder,poststart-1,poststart-numsright,inorder,inroot+1,inend,mpp);

        return root;

    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int numsright=inend-inroot;
        int inroot=mpp[root->val];

        TreeNode*root= new TreeNode(postorder[poststart]);

        if(poststart<postend || instart>inend) return NULL;

        map<int,int>mpp;

        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
