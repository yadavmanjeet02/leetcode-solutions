// Title: Kth Largest Element in a Stream
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/kth-largest-element-in-a-stream/

        }
        
        
    }
    
    int add(int val) {

        pq.push(val);
        if(pq.size()>k){
            pq.pop();
        }
        return pq.top();


        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
