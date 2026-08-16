// Title: Zigzag Conversion
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/zigzag-conversion/

         
        v[j] += s[i];

        if(dir == 1) j++;

        if(j == numRows - 1 || j == 0) dir *= (-1); 

    {
        else j--;
    }

    string res;

    for(auto &it : v) res += it; 

    return res;

    }
};
