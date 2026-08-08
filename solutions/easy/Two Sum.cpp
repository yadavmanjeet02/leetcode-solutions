// Title: Two Sum
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/two-sum/

        while(i<j){

            if(nums[i]+nums[j]<target){
                i++;
            }

        vector<int>ans;
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
        sort(nums.begin(),nums.end());
            }

        }
        return ans;
        
    }
