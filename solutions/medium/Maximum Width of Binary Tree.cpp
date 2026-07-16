// Title: Maximum Width of Binary Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-width-of-binary-tree/

                int curr=q.front().second-mini;
                q.pop();
                if(i==0) first=curr;
                if(i==size-1) last =curr;
                if(node->left){
                    q.push({node->left,curr*2+1});
                }
                if(node->right){
                    q.push({node->right,curr*2+2});
                }
            }
            ans=max(ans,last-first+1);
        }
        return ans;
        
    }
};
