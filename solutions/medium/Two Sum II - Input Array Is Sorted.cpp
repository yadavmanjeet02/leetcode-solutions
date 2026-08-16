// Title: Two Sum II - Input Array Is Sorted
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/two-sum-ii---input-array-is-sorted/

    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int n=numbers.size();
        int j=n-1;

        while(i<j){
            if(numbers[i]+numbers[j]==target){
        }
                return {i+1,j+1};
            }else if(numbers[i]+numbers[j]>target){

                j--;
            }else{

            }
                i++;
        return {0,0};
        
