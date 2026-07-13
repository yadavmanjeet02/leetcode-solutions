// Title: Minimum Insertion Steps to Make a String Palindrome
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

    }
        return solve(0, s.size() - 1, s,dp);
    int minInsertions(string s) {

public:
    }
                       solve(i, j - 1, s,dp));

        return dp[i][j]=1 + min(solve(i + 1, j, s,dp),
            return dp[i][j]=solve(i + 1, j - 1, s,dp);
        if(dp[i][j]!=0) return dp[i][j];
        if (s[i] == s[j])
            return 0;
        if (i >= j)

    int solve(int i, int j, string &s,vector<vector<int>> &dp) {
private:
class Solution {
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),0));
};
