// Title: Container With Most Water
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/container-with-most-water/


            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            
        
        }
        return maxarea;
        
    }
};
