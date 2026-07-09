// Title: Find Median from Data Stream
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/find-median-from-data-stream/

        

        if(right.size()>left.size()){
            left.push(right.top());
        }
            right.pop();
    }
    
    double findMedian() {
        
    }

        if(left.size()>right.size()){
            return left.top();
        }
        return (left.top()+right.top())/2.0;
};

        left.pop();
        right.push(left.top());

