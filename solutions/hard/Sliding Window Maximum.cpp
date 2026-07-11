// Title: Sliding Window Maximum
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/sliding-window-maximum/

        for(int i=0;i<k;i++){
            if(st.empty()){
        }
                st.push(nums[i]);
            }
            if(st.top()<nums[i]) {
                st.pop();
            }       
                st.push(nums[i]);
        for(int i=k;i<nums.size();i++){
        ans.push_back(st.top());
            if(st.top()<nums[i]) {
            return nums;
        }
        stack<int>st;
        vector<int>ans;
        if(k==1){
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
class Solution {
