// Title: Coin Change
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/coin-change/

class Solution {
private:
    int find(vector<int>& coins, int target,int ind,vector<vector<int>>&dp){
        if(ind==0){
            if(target%coins[ind]==0) return target/coins[ind];
            else{
                return 1e9;
            }
        }
        if(dp[ind][target]!=-1) return dp[ind][target];

        int nottake=0+find(coins,target,ind-1,dp);
        int take = INT_MAX;
        if(coins[ind]<=target){
            take=1+find(coins,target-coins[ind],ind,dp);
        }
        return dp[ind][target]=min(take,nottake);
    }

public:
