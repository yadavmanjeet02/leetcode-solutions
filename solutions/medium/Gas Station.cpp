// Title: Gas Station
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/gas-station/

             if(curr_fuel<0)
            {
                start=i;
                curr_fuel=0;
            }
            // at any station we'll fill petrol and pay the cost to go to the next station . so current 
            //for checking the total present gas at index i
            total_cost+=cost[i];
            fuel would be the following.
            curr_fuel+=(gas[i]-cost[i]);
        
        }
        return (total_gas<total_cost)?-1:start;     
    }
};
