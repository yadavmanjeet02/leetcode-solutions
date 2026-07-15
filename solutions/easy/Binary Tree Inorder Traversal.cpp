// Title: Binary Tree Inorder Traversal
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-inorder-traversal/

            else{
                TreeNode* prev=root->left;

                while(prev->right && prev->right!=root){
                    prev=prev->right;
                }

                if(prev->right==NULL){
                    prev->right=root;
                    root=root->left;
                }
                else{
                    prev->right=NULL;
                    ans.push_back(root->val);
                }
            }
        }


                    root=root->right;
        return ans;
