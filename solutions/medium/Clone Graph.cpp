// Title: Clone Graph
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/clone-graph/


        for(auto neighbour:node->neighbors){
        mp[node]=copy;

        Node* copy=new Node(node->val);

            return mp[node];
        if(mp.find(node)!=mp.end())
        // already copied

            return NULL;
        if(node==NULL)

    Node* dfs(Node* node){

    unordered_map<Node*,Node*> mp;

private:

            copy->neighbors.push_back(dfs(neighbour));

