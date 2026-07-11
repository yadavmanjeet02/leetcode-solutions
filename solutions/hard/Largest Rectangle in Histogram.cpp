// Title: Largest Rectangle in Histogram
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/largest-rectangle-in-histogram/

            }
            st.push(i);

        }
        while(!st.empty()){
            int nse=n;
            int curr=heights[st.top()];

                maxi=max(maxi,curr*(nse-pse-1));
                st.pop();
                int pse=st.empty()?-1:st.top();
                int curr= heights[st.top()];
            while(!st.empty() && heights[i]<=heights[st.top()]){
            };
            int nse=i;
                st.push(i);
                continue;
            if(st.empty()){
        for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        if(n==1) return heights[0];
