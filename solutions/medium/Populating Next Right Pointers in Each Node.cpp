// Title: Populating Next Right Pointers in Each Node
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

            }

            level=level->left;
        }

        return root;
                curr=curr->next;

                }
                    curr->right->next=curr->next->left;
                if(curr->next){
            
                curr->left->next=curr->right;


              

            while(curr){
            Node* curr=level;

        while(level->left){
