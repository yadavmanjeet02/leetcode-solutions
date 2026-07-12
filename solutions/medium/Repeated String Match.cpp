// Title: Repeated String Match
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/repeated-string-match/


        temp += a;
        // Add one more repetition

            return repeat;
        if (temp.find(b) != string::npos)
        // Check if b exists

            repeat++;
        }
        while (temp.size() < b.size()) {
            temp += a;
        if (temp.find(b) != string::npos)
            return repeat + 1;

        return -1;
    }
};
        // Repeat until temp is at least as long as b
