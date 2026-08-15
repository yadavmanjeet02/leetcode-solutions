// Title: Jump Game II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/jump-game-ii/


                int next = i + j;

                if (next >= n)
                    break;

                if (mpp.find(next) == mpp.end()) {
                    mpp[next] = ministeps + 1;
                }
            }
        }

        return mpp[n - 1];
    }
