// Title: Binary Tree Level Order Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-level-order-traversal/


                ds.push_back(node->val);
                if(node->left){
                    q.push({node->left,level+1});

                }
                if(node->right){
                    q.push({node->right,level+1});
                }
            }
            ans.push_back(ds);
        }
        return ans;
        
    }
};
