// Title: Two Sum
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/two-sum/

            else if(sum>target){
                right--;
            }
            else if(sum==target){
                
                return {temp[left].second,temp[right].second};

            }

        }
        return{};

    }
};

