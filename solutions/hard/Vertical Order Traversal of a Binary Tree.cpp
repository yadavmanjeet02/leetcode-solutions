// Title: Vertical Order Traversal of a Binary Tree
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

        for(auto &x:nodes){

            vector<int> temp;

            for(auto &y:x.second){

                temp.insert(
                    temp.end(),
                    y.second.begin(),
                    y.second.end()
                );
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
