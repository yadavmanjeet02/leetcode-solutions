// Title: Longest Palindromic Substring
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-palindromic-substring/

            }

            // Even length
                r++;
                l--;

                    ans = s.substr(l, r - l + 1);
                if (r - l + 1 > ans.size())
            l = i;
            r = i + 1;

            while (l >= 0 && r < s.size() && s[l] == s[r]) {

                if (r - l + 1 > ans.size())
                    ans = s.substr(l, r - l + 1);

                l--;
                r++;
            }
        }

