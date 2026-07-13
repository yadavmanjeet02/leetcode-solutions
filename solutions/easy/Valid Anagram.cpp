// Title: Valid Anagram
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        
        if(s.size()!=t.size()) return false;
        while(i<=s.size()){
            if(s[i]!=t[j]) return false;
        }
    }
            i++;
            j++; 
        return true;
};
