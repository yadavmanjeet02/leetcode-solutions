// Title: Text Justification
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/text-justification/


                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k != j - 1) {
                        int toAdd = spaceEach + (extra > 0 ? 1 : 0);
                        line += string(toAdd, ' ');
                        if (extra > 0) extra--;
                    }
                }
            }

            ans.push_back(line);
            i = j; // move to next line
        }
                int extra = spaces % gaps; // extra spaces to distribute from left
                int spaceEach = spaces / gaps;
            } else {
                while (line.size() < maxWidth) line += " ";
                // Pad remaining spaces at the end
