// Title: Ransom Note
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/ransom-note/


        // Count characters in magazine
        for(char c : magazine) {
            freq[c - 'a']++;
        }

        // Use characters for ransomNote
        for(char c : ransomNote) {
            freq[c - 'a']--;

            if(freq[c - 'a'] < 0)
                return false;
        }
        int freq[26] = {0};

    bool canConstruct(string ransomNote, string magazine) {
public:
class Solution {
