// Title: Course Schedule
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/course-schedule/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for(auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }
        int n =numCourses;
        vector<int>vis(n,0);
        vector<int>indegrees(n,0);

        for(int i=0;i<n;i++){
            for(auto it :adj[i]){
                indegrees[it]++;
            }

        }
        queue<int>q;
