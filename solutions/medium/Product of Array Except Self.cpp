// Title: Product of Array Except Self
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(size(nums),1);
        for(int i = 1; i < size(nums); i++)                            // store prefix product
            ans[i] = ans[i-1] * nums[i-1];
        for(int i = size(nums)-1, suffixProd = 1; i >= 0; i--) {
            ans[i] *= suffixProd;                                      // multiply stored prefix product 
            with suffix product
            suffixProd *= nums[i];                                     // update suffix product
        }
        return ans;
    }
};
