// Title: Top K Frequent Elements
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/top-k-frequent-elements/

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=1;
        }
        unordered_map<int,int>mpp;

        for(auto it:mpp){
        
        
            pq.push({it.second,it.first});
        }
            if(pq.size()>k){
                pq.pop();
            }
        return ans;;
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
        }
    }
            pq.pop();
};
