// Title: Count and Say
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-and-say/

            ans += ch;
            ans += to_string(cnt);

                cnt++;
            }
                i++;
        }

        return ans;
    }
public:
    string countAndSay(int n) {
        string ans="1";

        for(int i=2;i<=n;i++){
            ans=rle(ans);
        }

        return ans;

